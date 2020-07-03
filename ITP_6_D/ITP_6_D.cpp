#include<iostream>
using namespace std;

int main()
{

    int n,m,temp;
    cin >> n >> m;

    int mat[100][100]={};
    int vec_in[100]={};
    int vec_out[100]={};

    for(int i =0; i < n; i++)
    {
        for(int j=0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    for(int i =0; i < m; i++)
    {
        cin >> vec_in[i];
    }

    for(int i =0; i < n; i++)
    {
        temp=0;
        for(int j=0; j < m; j++)
        {
            temp += mat[i][j]*vec_in[j];
        }
        cout << temp << endl;
    }

    return 0;
}
