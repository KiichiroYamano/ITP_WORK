#include<iostream>
#include<string>
#include<cctype>
using namespace std;
string tolower_string(string str);

int main()
{
    string W,T;
    cin >> W;

    int counter=0;
    while( cin >> T)
    {
        if(T == "END_OF_TEXT") break;
        else if(tolower_string(T) == tolower_string(W)) counter++;
    }
    cout << counter << endl;
    return 0;
}

string tolower_string(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}
