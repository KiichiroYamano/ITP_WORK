#include<iostream>
using namespace std;

int main(){

    int W,H,x,y,r,up,low,left,right;

    cin >> W >> H >> x >> y >> r;

    if(H < y + r) cout << "No" << endl;
    else if(0 > y - r) cout << "No" << endl;
    else if(W < x + r) cout << "No" << endl;
    else if (0 > x - r) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}