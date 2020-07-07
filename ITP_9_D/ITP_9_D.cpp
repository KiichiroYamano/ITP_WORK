#include<iostream>
#include<string>
#include<cctype>
using namespace std;
string reverse_str(string str,int a,int b);

int main()
{
    string str;
    cin >> str;

    int num;
    cin >> num;

    string op="",p="";
    int a,b;
    for (int i = 0; i < num; i++)
    {
        cin >> op >> a >> b;
        if(op == "replace") cin >> p;
    
        if(op == "print") cout << str.substr(a, b - a + 1) << endl;
        else if(op == "reverse") str = reverse_str(str, a, b);
        else if(op == "replace") str.replace(a ,b - a + 1, p);
    }
    
    return 0;
}

string reverse_str(string str,int a,int b)
{
    string str_ret,str_sub;

    str_ret = str.substr(0,a);

    str_sub = str.substr(a, b - a + 1);
    for (int i = 1; i <= str_sub.length(); i++)
    {
        str_ret += str_sub[str_sub.length()-i];
    }
    
    if(str_ret.length() < str.length()) str_ret += str.substr(str_ret.length(), str.length() - str_ret.length());

    return str_ret;
}

