#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char chin[1200]={};
    cin.getline(chin,sizeof(chin));
    char chout[1200] = {};
    char c;
    for (int i = 0; i < 1200; i++)
    {
        c = chin[i];
        chout[i] = islower(c) ? toupper(c) : isupper(c) ? tolower(c) : c;
    }
    cout << chout << endl;

    return 0;
}
