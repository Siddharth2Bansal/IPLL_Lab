#include <bits/stdc++.h>

using namespace std;

#define t_record_max 30

struct line{
    string label, mnemonic, operand, addr;
};

struct t_record{
    string start, objectCode;
    int len;
};


map<string, string> symtab;

typedef struct line line;
typedef struct t_record t_record;

line reader()
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
        if (str[i] == '.')
            cout << "     "<< str << endl;
        else
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
        if (str[i] == '.')
            cout << "     "<< str << endl;
        else
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


int hexToDec(string str)
{
    int y;
    stringstream stream;
    stream << str;
    stream >> hex >> y;
    return y;
}

string decToHex(int num)
{
    stringstream stream;
    stream << hex << num;
    return stream.str();
}

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

// op_table
string opcode(string mnemonic)
{
    map <string, string> opcode;
	opcode.insert(pair <string , string> ("LDA", "00"));
	opcode.insert(pair <string , string> ("AND", "40"));
	opcode.insert(pair <string , string> ("DIV", "24"));
	opcode.insert(pair <string , string> ("SUB", "1C"));
	opcode.insert(pair <string , string> ("ADD", "18"));
	opcode.insert(pair <string , string> ("LDL", "08"));
	opcode.insert(pair <string , string> ("RD", "D8"));
	opcode.insert(pair <string , string> ("WD", "DC"));
	opcode.insert(pair <string , string> ("LDCH", "50"));
	opcode.insert(pair <string , string> ("STX", "10"));
	opcode.insert(pair <string , string> ("JLT", "38"));
	opcode.insert(pair <string , string> ("TIX", "2C"));
	opcode.insert(pair <string , string> ("TD", "E0"));
	opcode.insert(pair <string , string> ("STCH", "54"));
	opcode.insert(pair <string , string> ("STL", "14"));
	opcode.insert(pair <string , string> ("LDX", "04"));
	opcode.insert(pair <string , string> ("RSUB", "4C"));
	opcode.insert(pair <string , string> ("STA", "0C"));
	opcode.insert(pair <string , string> ("J", "3C"));
	opcode.insert(pair <string , string> ("JEQ", "30"));
	opcode.insert(pair <string , string> ("COMP", "26"));
	opcode.insert(pair <string , string> ("COMP", "14"));
	opcode.insert(pair <string , string> ("JSUB", "48"));
	opcode.insert(pair <string , string> ("JGT", "34"));
	opcode.insert(pair <string , string> ("MUL", "20"));
	opcode.insert(pair <string , string> ("OR", "44"));
	opcode.insert(pair <string , string> ("STSW", "E8"));

	if(opcode.find(mnemonic) == opcode.end())
		return "-1";
	
	return opcode[mnemonic];
}

void pass1(string infile)
{
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
        start_addr = "0000";
    }
    loc = start_addr;
    while(line.mnemonic != "END")
    {
        cur_loc = loc;
        if(line.label != "")
        {
            if(symtab.find(line.label) != symtab.end())
            {
                // duplicate symbol error
            }
            else
            {
                symtab[line.label] = loc;
            }
        }
        if(opcode(line.mnemonic) != "-1")
        {
            loc = add(loc, "3", 0);
        }
        else if(line.mnemonic == "WORD")
        {
            loc = add(loc, "3", 0);
        }
        else if(line.mnemonic == "RESW")
        {
            int reserve = 3 * atoi(line.operand.c_str());
            string hexaReserve = decToHex(reserve);
            loc = add(loc, hexaReserve, 1);
        }
        else if(line.mnemonic == "RESB")
        {
            int reserve = atoi(line.operand.c_str());
            string hexaReserve = decToHex(reserve);
            loc = add(loc, hexaReserve, 1);
        }
        else if(line.mnemonic == "BYTE")
        {
            int bytes;
            string label2 = line.operand;
            char ch = label2[0];
            if(ch == 'C')
            {
                bytes = (label2.size() - 3);
            }
            else
            {
                if((label2.size() - 3) % 2 == 0)
                {
                    bytes = (label2.size() -3) / 2;
                }
                else
                {
                    bytes = ((label2.size() - 3) / 2) + 1;
                }
            }
            loc = add(loc, to_string(bytes), 1);

        }
        else
        {
            // invalid opcode error.
        }
        cout << cur_loc <<  ' ' << setw(8) << left << line.label << setw(8) << left << line.mnemonic << line.operand << endl;
        line = reader();
    }

    cout << loc <<  ' ' << setw(8) << left << line.label << setw(8) << left << line.mnemonic << line.operand << endl;

    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);
}

void pass2()
{
    // set input and output streams

    line line;
    string start_addr, object;

    line = inter_reader();
    if(line.mnemonic == "START")
    {
        start_addr = line.operand;
        line = inter_reader();
    }
    // write header record.
    t_record t_record;
    t_record.start = start_addr;
    t_record.len = 0;
    t_record.objectCode = "";
    while(line.mnemonic != "END")
    {   
        object = "";
        if(opcode(line.mnemonic) != "-1")
        {
            object += opcode(line.mnemonic);
            if(line.operand != "")
            {
                if(symtab.find(line.operand) != symtab.end())
                {
                    object += symtab[line.operand];
                }
                else
                {
                    // unidentified symbol error
                }
            }
            else
            {
                object += "0000";
            }
        }
        else if (line.mnemonic == "BYTE" || line.mnemonic == "WORD")
        {
            // assmeble into string and store as object
        }
        if (t_record.len + (object.size()/2) > t_record_max)
        {
            cout << "T" << "00" << t_record.start << /*len in hex*/"00"<<t_record.objectCode << endl;
            t_record.len = 0;
            t_record.start = line.addr;
            t_record.objectCode = "";
        }
        t_record.len += (object.size()/2);
        t_record.objectCode += object;
        line = inter_reader();
    }
    cout << "T" << "00" << t_record.start << /*len in hex*/"00"<<t_record.objectCode << endl;
    string prog_start;
    if(symtab.find(line.operand) != symtab.end())
    {
        prog_start = symtab[line.operand];
    }
    else if(line.operand == "")
    {
        prog_start = start_addr;
    }
    else
    {
        // unidentified symbol error
    }
    cout << "E" << "00" << prog_start;
}


int main(int argc, char **argv)
{
	// check that the input is provided in the proper format
	// if(argc != 2)
	// {
	// 	cout << "Usage: ./a.out {source file}\n";
	// 	return 0;
	// }

	// run the  2-pass assembler
	// string input = argv[1];
    string input = "sample_input.txt";
	pass1(input);

	return 0;
}