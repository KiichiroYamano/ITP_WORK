#include<iostream>
using namespace std;

int main()
{

    int r,c,sum;
    cin >> r >> c;
    int input[101][101] = {};
    int output[102][102] = {};
    int sumcol[102] = {};

    for (int i = 1; i <= r; i++)
    {
        sum = 0;
        for (int j = 1; j <= c; j++)
        {
            cin >> input[i][j];
            output[i][j] = input[i][j];
            sum += input[i][j];
            sumcol[j] += input[i][j];
        }
        output[i][c + 1] = sum;
        sumcol[c + 1] += sum;
    }
    
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c ; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << output[i][c + 1] << endl;
    }

    for (int j = 1; j <= c ; j++)
    {
        cout << sumcol[j] << " ";
    }
    cout << sumcol[c + 1] << endl;
    
    return 0;
}
