#include<cstdio>
#include<string>
using namespace std;

int main()
{
    int counter[26]={};
    char ch;
    while( scanf("%c", &ch) != EOF )
    {
        if(isalpha(ch))
        {
            counter[tolower(ch) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c : %d\n", ('a' + i), counter[i]);
    } 

    return 0;
}
