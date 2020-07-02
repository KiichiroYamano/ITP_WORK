#include<cstdio>

int main(){

    int a,b,ans;
    char op;

    while(1)
    {
        scanf("%d %c %d", &a, &op, &b);
        if(op == '?') break;
        ans = (op == '+') ? a + b : (op == '-') ? a - b : (op == '*') ? a * b : (op == '/') ? a / b : 0;
        printf("%d\n", ans);
    }

    return 0;
}

