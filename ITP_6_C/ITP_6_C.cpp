#include<iostream>
using namespace std;

int main()
{
    int OH[5][4][11] = {};
    int n,b,f,r,v;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> b >> f >> r >> v;
        OH[b][f][r] += v;
    }

    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 10; k++)
            {
                cout << " " << OH[i][j][k];
            }
            cout << endl;
        }
        if(i != 4) cout << "####################" <<endl;
    }

    return 0;
}
