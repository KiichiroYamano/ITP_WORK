#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n,x[100]={},y[100]={};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }

    double d1=0.0, d2=0.0, d3=0.0, di=0.0, tmp=0.0;
    for (int i = 0; i < n; i++)
    {
        tmp = fabs(x[i] - y[i]);
        d1 += tmp;
        d2 += pow(tmp,2);
        d3 += pow(tmp,3);
        if(tmp > di) di = tmp;
    }
    
    d2 = sqrt(d2);
    d3 = pow(d3,1.0/3.0);
    printf("%lf\n%lf\n%lf\n%lf\n",d1, d2, d3, di);

    return 0;
}

