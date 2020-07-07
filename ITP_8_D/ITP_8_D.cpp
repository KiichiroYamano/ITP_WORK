#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char ch1[201]={};
    char ch2[101]={};
    scanf("%s", ch1);
    strcpy(ch2,ch1);
    strcat(ch1,ch2);

    char ch3[101]={};
    scanf("%s", ch3);
    
    if(strstr(ch1,ch3) == NULL) printf("No\n");
    else printf("Yes\n");
    
    return 0;
}
