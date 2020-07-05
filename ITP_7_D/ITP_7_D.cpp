#include<iostream>
using namespace std;

int main()
{

    int n,m,l;
    cin >> n >> m >> l;
    long A[101][101]={};
    long B[101][101]={};
    long C_temp;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            cin >> B[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            C_temp = 0;
            for (int k = 1; k <= m; k++)
            {
                C_temp += A[i][k] * B[k][j];
            }
            if(j == l)cout << C_temp << endl;
            else cout << C_temp << " ";
        }
    }
    
    return 0;
}
