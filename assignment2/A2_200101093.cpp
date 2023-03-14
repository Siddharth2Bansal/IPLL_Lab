#include <bits/stdc++.h>

using namespace std;

#define t_record_max 30
// struct for parsed line
struct line{
    string label, mnemonic, operand, addr;
};

struct t_record{
    string start, objectCode;
    int len;
};


map<string, string> symtab, optable;
string prog_length;

typedef struct line line;
typedef struct t_record t_record;

// reads line from input, printing comments to intermediate file, parses the first instruction and returns the struct 
line reader()
{
    string str;
    vector<string> arr;
    line code;
    while(true)
    {
        getline(cin, str);
        int i = 0;
        while(i < str.length() && (str[i] == ' ' || str[i] == '\t'))
            i++;
            // skip comments
        if (str[i] == '.')
            cout << "     "<< str << endl;
        else
        {
            string word = "";
            for (auto x : str)
            {
                if(x == ' ')
                {
                    if(word != "")
                        arr.push_back(word);
                    word = "";
                }
                else 
                    word = word + x;
            }
            arr.push_back(word);
            break;
        }

    }
    // decide what a word is depending on the number of words in the line.
    if(arr.size() == 3)
    {   
        code.addr = "";
        code.label = arr[0];
        code.mnemonic = arr[1];
        code.operand = arr[2];
    }
    else
    {
        code.addr = "";
        code.label = "";
        code.mnemonic = arr[0];
        code.operand = (arr.size() == 2)? arr[1] : "";
    }

    return code;
}

// line reader from the intermediate file.
// similar to reader() expect doesnt print comments and slight change in assigning the words in the line due to addition of address.
line inter_reader()
{
    string str;
    vector<string> arr;
    line code;
    while(true)
    {
        getline(cin, str);
        int i = 0;
        while(i < str.length() && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i] != '.')
            // cout << "     "<< str << endl;
        {

            string word = "";
            for (auto x : str)
            {
                if (x == ' ')
                {
                    if(word != "")
                        arr.push_back(word);
                    word = "";
                }
                else {
                    word = word + x;
                }
            }
            arr.push_back(word);

            break;
        }

    }
    if(arr.size() == 4)
    {   
        code.addr = arr[0];
        code.label = arr[1];
        code.mnemonic = arr[2];
        code.operand = arr[3];
    }
    else
    {
        code.addr = arr[0];
        code.label = "";
        code.mnemonic = arr[1];
        code.operand = (arr.size() == 3)? arr[2] : "";
    }

    return code;
}

// convert hexadecimal string to int
int hexToDec(string str)
{
    int y;
    stringstream stream;
    stream << str;
    stream >> hex >> y;
    return y;
}

// convert int to hexadecimal string padding it to minimum lenght = pad
string decToHex(int n, int pad = 0)
{
    string ans = "";
    char ch;
    while (n != 0) 
    {
        int rem = 0;
        rem = n % 16;

        if (rem < 10)
            ch = rem + 48;
        else 
            ch = rem + 55;
    
        ans.insert(0, 1, ch);
        n = n / 16;
    }
    while(ans.size()<pad)
        ans.insert(0, 1, '0');

    return ans;
}

// add the two strings str and adder
// if flag is set, the two strings are assumed to be in hexadecimal form
// else the second string is in decimal form
string add(string str, string adder, int flag)
{
	//Adding hex and hex
	if(flag)
	{
		int num1 = hexToDec(str);
		int num2 = hexToDec(adder);
		int sum = num1 + num2;
		return decToHex(sum);
	}
	//Adding decimal and hex
	else
	{
		int num1 = hexToDec(str);
		int num2 = atoi(adder.c_str());
		int sum = num1 + num2;
		return decToHex(sum);
	}
}

// optable initialization
void init_optable()
{
	optable["ADD"]="18";
    optable["AND"]="40";
	optable["COMP"]="28";
	optable["DIV"]="24";
	optable["J"]="3C";
	optable["JEQ"]="30";
	optable["JGT"]="34";
	optable["JLT"]="38";
	optable["JSUB"]="48";
	optable["LDA"]="00";
	optable["LDCH"]="50";
	optable["LDL"]="08";
	optable["LDX"]="04";
	optable["MUL"]="20";
    optable["OR"]="44";
	optable["RD"]="D8";
	optable["RSUB"]="4C";
	optable["STA"]="0C";
	optable["STCH"]="54";
	optable["STSW"]="E8";
	optable["STL"]="14";
	optable["STX"]="10";
	optable["SUB"]="1C";
	optable["TD"]="E0";
	optable["TIX"]="2C";
	optable["WD"]="DC";
}


// function to browse optable
// return opcode if mnemonic is  present in optable, else "-1"
string opcode(string mnemonic)
{

	if(optable.find(mnemonic) == optable.end())
		return "-1";
	return optable[mnemonic];
}

// get address of the label from symbol table while addressing(lol) the indirect addressing
// returns "-1" on invalid symbol
string get_addr(string label_x)
{
    string label = "";
    string label_addr;
    int flag = 0;
    for(int l = 0; l < label_x.size(); l++)
    {
        if(label_x[l] == ',')
        {
            flag = 1;
            break;
        }
        label += label_x[l];
    }
    if(symtab.find(label) != symtab.end())
    {
        label_addr = symtab[label];
        if(flag)
        {
            label_addr = add(label_addr, "8000", 1);
        }
        return label_addr;
    }
    else
    {
        return "-1";
    }
}

// first pass of the assmebler code
// reads line one by one and processes them.
void pass1(string infile)
{
    // redirect input and output, storing the previous buffers
    ifstream in(infile);
    streambuf *cinbuf = cin.rdbuf();
    cin.rdbuf(in.rdbuf());

    ofstream out("intermdiate.txt");
    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(out.rdbuf());
    
    string str;
    line line;
    string loc, start_addr, cur_loc;

    line = reader();
    if (line.mnemonic == "START")
    {
        start_addr = line.operand;
        cout << start_addr << ' ' << setw(8) << left << line.label << setw(8) << left << line.mnemonic << line.operand << endl;
        line = reader();
    }
    else 
    {
        // default starting address
        start_addr = "0000";
    }
    loc = start_addr;
    while(line.mnemonic != "END")
    {
        cur_loc = loc;
        if(line.label != "")
        {
            // populating symbol table everytime a label is encountered.
            if(symtab.find(line.label) != symtab.end())
            {
                cin.rdbuf(cinbuf);
                cout.rdbuf(coutbuf);
                cout << "Duplicate Symbol definition used" << endl;
                return;
            }
            else
            {
                symtab[line.label] = loc;
            }
        }
        // increment present instruction location according to the instruction
        if(opcode(line.mnemonic) != "-1")
        {
            loc = add(loc, "3", 0); // instructions present in optable are 3 byte long
        }
        else if(line.mnemonic == "WORD")
        {
            loc = add(loc, "3", 0); // size of word = 3 bytes
        }
        else if(line.mnemonic == "RESW")
        {
            int reserve = 3 * atoi(line.operand.c_str());
            string hexaReserve = decToHex(reserve);
            loc = add(loc, hexaReserve, 1);     // reserved size = 3 * number of words reserved
        }
        else if(line.mnemonic == "RESB")
        {
            int reserve = atoi(line.operand.c_str());
            string hexaReserve = decToHex(reserve);
            loc = add(loc, hexaReserve, 1); // reserved size = number of bytes reserved
        }
        else if(line.mnemonic == "BYTE")    // find the size of constant and increment loc by that much
        {
            int bytes;
            string label2 = line.operand;
            char ch = label2[0];
            if(ch == 'C')
            {
                bytes = (label2.size() - 3);    //the characters present in label2 are C'<const>'
            }
            else                                // the constant is present in hexadecimal form
            {
                if((label2.size() - 3) % 2 == 0)
                    bytes = (label2.size() -3) / 2;
                else
                    bytes = ((label2.size() - 3) / 2) + 1;
            }
            loc = add(loc, to_string(bytes), 1);

        }
        else
        {
            cin.rdbuf(cinbuf);
            cout.rdbuf(coutbuf);
            cout << "Invalid opcode used" << endl;
            return;
        }
        cout << cur_loc <<  ' ' << setw(8) << left << line.label << setw(8) << left << line.mnemonic << line.operand << endl;
        line = reader();
    }
    prog_length = decToHex(hexToDec(loc) - hexToDec(start_addr), 4);
    cout << loc <<  ' ' << setw(8) << left << line.label << setw(8) << left << line.mnemonic << line.operand << endl;
    // redirect the standart input and output back to default.
    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);
}

// second pass of the assembler
// generate binary code and put into records
void pass2()
{
    // redirect I/O
    ifstream in("intermdiate.txt");
    streambuf *cinbuf = cin.rdbuf();
    cin.rdbuf(in.rdbuf());

    ofstream out("output.txt");
    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(out.rdbuf());

    line line;
    string start_addr, object, len_buf;

    line = inter_reader();
    // if "START" present, starting location is its operand
    if(line.mnemonic == "START")
    {
        start_addr = line.operand;
        cout << "H" << setw(6) << left << line.label << "00" << start_addr << "00" << prog_length << endl;
        line = inter_reader();
    }
    else
    {
        start_addr = "0000";
        cout << "H" << setw(6) << left << "PROG" << "00" << start_addr << "00" << prog_length << endl;
    }
    // initialize first T record
    t_record t_record;
    t_record.start = start_addr;
    t_record.len = 0;
    t_record.objectCode = "";
    while(line.mnemonic != "END")
    {   
        object = "";
        if(line.mnemonic == "RESB" || line.mnemonic == "RESW")  // end current T record on encountering a "RESB" or "RESW"
        {   
            if(t_record.len != 0)
            {
                cout << "T" << "00" << t_record.start << decToHex(t_record.len, 2) <<t_record.objectCode << endl;
                t_record.len = 0;
                t_record.start = "";
                t_record.objectCode = "";
            }

            line = inter_reader();
            continue;
        }
        else if(opcode(line.mnemonic) != "-1")      // if mnemonic present in optable, convert the OPCODE OPERAND into binary
        {
            object += opcode(line.mnemonic);
            if(line.operand != "")
            {
                if(get_addr(line.operand) == "-1")  // handle unidentified operand
                {
                    cin.rdbuf(cinbuf);
                    cout.rdbuf(coutbuf);
                    cout << "Unidentified Symbol usage encountered" << endl;
                    return;
                }
                else
                {
                    object += get_addr(line.operand);
                }
            }
            else    // when the operand is not present, the address can be anything without impacting the code, set as 0000 default.
            {
                object += "0000";
            }
        }
        else if (line.mnemonic == "BYTE")   // constant is converted(if needed) to hexadecimal form and then stored as binary.
        {
            // assmeble into string and store as object
            if(line.operand[0] == 'C')
			{
				for(int i = 2; i < line.operand.size()-1; i++)
				{
					int ascii = line.operand[i];
					object += (decToHex(ascii));
				}
			}
			else
			{
                if(line.operand.size() % 2 == 0)
                    object += "0";
				for(int i = 2; i < line.operand.size()-1; i++)
				{
					object += (line.operand[i]);
				}
			}
        }
        else if (line.mnemonic == "WORD")   // direct conversion into binary with padding if needed.
        {

			object += decToHex(atoi(line.operand.c_str()), 6);
        }
        // if record full, print current record and initialize new record.
        if (t_record.len + (object.size()/2) > t_record_max)
        {
            cout << "T" << "00" << t_record.start << decToHex(t_record.len, 2) <<t_record.objectCode << endl;
            t_record.len = 0;
            t_record.start = "";
            t_record.objectCode = "";
        }
        t_record.len += (object.size()/2);
        t_record.objectCode += object;
        t_record.start = (t_record.start == "") ? line.addr : t_record.start;
        line = inter_reader();
    }
    // print final record, if any left to print
    if(t_record.len)
        cout << "T" << "00" << t_record.start << decToHex(t_record.len, 2) << t_record.objectCode << endl;
    string prog_start;
    // if END is not followed by a label, assume the program starts at the starting address else program starts at teh supplied label
    if(line.operand == "")
    {
        prog_start = start_addr;
    }
    else if(get_addr(line.operand) != "-1")
    {
        prog_start = get_addr(line.operand);
    }
    else                // again, unientified symbol error
    {
        cin.rdbuf(cinbuf);
        cout.rdbuf(coutbuf);
        cout << "Unidentified Symbol usage encountered" << endl;
        return;
    }
    cout << "E" << "00" << prog_start << endl;
    // reset I/O to default
    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);
}

// function to print optable and symbol table
void print_tables()
{   
    // output redirection
    ofstream out("symbol_table.txt");
    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(out.rdbuf());
    
    cout << setw(10) << left << "SYMBOL" << "|  " << setw(5) << left << "ADDRESS" << endl << endl;

    for(auto i : symtab)
        cout << setw(10) << left << i.first << "|  " << setw(5) << left << i.second << endl;
    
    ofstream out2("optable.txt");
    cout.rdbuf(out2.rdbuf());


    cout << setw(10) << left << "Mnemonic" << "|  " << setw(5) << left << "Binary" << endl << endl;

    for(auto i : optable)
        cout << setw(10) << left << i.first << "|  " << setw(5) << left << i.second << endl;
    // reset output stream
    cout.rdbuf(coutbuf);
}


int main(int argc, char **argv)
{
	// check that the input is provided in the proper format
	if(argc != 2)
	{
		cout << "Usage: ./a.out {source file}\n";
		return 0;
	}
	string input = argv[1];

	// run the  2-pass assembler
    init_optable();
	pass1(input);
    print_tables();
    pass2();
	return 0;
}