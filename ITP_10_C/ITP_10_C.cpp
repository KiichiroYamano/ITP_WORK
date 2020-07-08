#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n;
    double s[1000]={};

    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;
        
        double sum = 0.0, m=0.0, std_dev=0.0;
        for (int  i = 0; i < n; i++)
        {
            scanf("%lf", &s[i]);
            sum += s[i];
        }
        m = sum / (double)n;

        sum = 0.0;
        for (int i = 0; i <n ; i++)
        {
            sum += pow( s[i] - m, 2);
        }
        std_dev = sqrt(sum / n);
        
        printf("%lf\n", std_dev);

    }

    return 0;
}

