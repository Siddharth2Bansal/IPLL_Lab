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
string prog_length;

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


int hexToDec(string str)
{
    int y;
    stringstream stream;
    stream << str;
    stream >> hex >> y;
    return y;
}


string decToHex(int n, int pad = 0)
{
    // ans string to store hexadecimal number
    string ans = "";

    while (n != 0) {
        // remainder variable to store remainder
        int rem = 0;
        
        // ch variable to store each character
        char ch;
        // storing remainder in rem variable.
        rem = n % 16;

        // check if temp < 10
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 55;
        }
        
        // updating the ans string with the character variable
        ans.insert(0, 1, ch);
        n = n / 16;
    }
    while(ans.size()<pad)
        ans.insert(0, 1, '0');
    return ans;
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
	opcode.insert(pair <string , string> ("COMP", "28"));
	opcode.insert(pair <string , string> ("JSUB", "48"));
	opcode.insert(pair <string , string> ("JGT", "34"));
	opcode.insert(pair <string , string> ("MUL", "20"));
	opcode.insert(pair <string , string> ("OR", "44"));
	opcode.insert(pair <string , string> ("STSW", "E8"));

	if(opcode.find(mnemonic) == opcode.end())
		return "-1";
	
	return opcode[mnemonic];
}


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
    prog_length = decToHex(hexToDec(loc) - hexToDec(start_addr), 4);
    cout << loc <<  ' ' << setw(8) << left << line.label << setw(8) << left << line.mnemonic << line.operand << endl;

    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);
}

void pass2()
{

    ifstream in("intermdiate.txt");
    streambuf *cinbuf = cin.rdbuf();
    cin.rdbuf(in.rdbuf());

    ofstream out("output.txt");
    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(out.rdbuf());

    line line;
    string start_addr, object, len_buf;

    line = inter_reader();
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
    
    t_record t_record;
    t_record.start = start_addr;
    t_record.len = 0;
    t_record.objectCode = "";
    while(line.mnemonic != "END")
    {   
        object = "";
        if(line.mnemonic == "RESB" || line.mnemonic == "RESW")
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
        else if(opcode(line.mnemonic) != "-1")
        {
            object += opcode(line.mnemonic);
            if(line.operand != "")
            {
                if(get_addr(line.operand) == "-1")
                {
                    // unidentified symbol error
                }
                else
                {
                    object += get_addr(line.operand);
                }
            }
            else
            {
                object += "0000";
            }
        }
        else if (line.mnemonic == "BYTE")
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
        else if (line.mnemonic == "WORD")
        {

			object += decToHex(atoi(line.operand.c_str()), 6);
        }
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
    if(t_record.len)
        cout << "T" << "00" << t_record.start << decToHex(t_record.len, 2) << t_record.objectCode << endl;
    string prog_start;
    
    if(line.operand == "")
    {
        prog_start = start_addr;
    }
    else if(get_addr(line.operand) != "-1")
    {
        prog_start = get_addr(line.operand);
    }
    else
    {
        // unidentified symbol error
    }
    cout << "E" << "00" << prog_start << endl;

    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);
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
    pass2();
	return 0;
}