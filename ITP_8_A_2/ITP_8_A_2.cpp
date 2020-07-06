#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    char cho;
    while(1)
    {
        scanf("%c", &ch);
        if(ch == '\n') break;
        cho = islower(ch) ? toupper(ch) : isupper(ch) ? tolower(ch) : ch;
        printf("%c", cho);
    }
    
    return 0;
}
