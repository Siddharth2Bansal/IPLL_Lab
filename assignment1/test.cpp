#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n;
    cin >> n;
    getchar();
    getline(cin, str);
    int ind = 0;
    int st, en, i=0;
    while(true)
    {
        while((str[ind] > '9') || (str[ind] < '0'))
        ind++;
        st = ind;
        while((str[ind] <= '9') && (str[ind] >= '0'))
        ind++;
        en = ind;
        cout << str.substr(st, en-st) << '\n';
        i++;
        if(i==n)
        break;
    }
    

    return 0;
}