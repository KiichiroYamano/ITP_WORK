#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c,C,S,L,h;
    double PI = acos(-1);

    scanf("%lf %lf %lf", &a, &b, &C);
    
    h = b * sin(PI*(180-C)/180);
    S = a * h / 2;
    L = a + b + sqrt(pow(h,2) + pow((a - b * cos(PI*C/180)),2));

    printf("%lf\n%lf\n%lf\n",S,L,h);

    return 0;
}

