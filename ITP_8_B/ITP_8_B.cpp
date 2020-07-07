#include<cstdio>

int main()
{
    char input[1001]={};
    while(1)
    {
        int sum = 0;   
        scanf("%s", input);
        if(input[0] == '0') break;
        for (int i = 0; i < 1000; i++)
        {
            if( input[i] == '\0' ) break;
            sum += input[i] - '0';
        }
        printf("%d\n", sum);
    }   

    return 0;
}
