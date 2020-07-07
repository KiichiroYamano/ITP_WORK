#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string str,str1,str2;
    int num,h;
    while(1)
    {
        cin >> str;
        if(str=="-") break;

        cin >> num;

        for (int i = 0; i < num; i++)
        {
            cin >> h;
            str1 = str.substr(0,h);
            str2 = str.substr(h, str.length() - 1 );
            str = str2 + str1;
        }
        cout << str << endl;
    }
    
    return 0;
}


