#include<iostream>
using namespace std;

int main(){

    int n;
    bool card[4][14]={}; //[S,H,C,D][0-13]

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        char mark;
        int num;
        cin >> mark >> num;
        if(mark == 'S')      card[0][num] = true;
        else if(mark == 'H') card[1][num] = true;
        else if(mark == 'C') card[2][num] = true;
        else if(mark == 'D')  card[3][num] = true;
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 1; j <= 13; j++)
        {
            if(!card[i][j])
            {
                cout << ((i==0) ? 'S' : (i==1) ? 'H' : (i==2) ? 'C' : 'D') << " " << j << endl;
            }
        }
    }

    return 0;
}
