#include<iostream>
using namespace std;

int main(){

    int a,b,c,con=0;
    cin >> a >> b >> c;
    for(a; a <= b; a++)
    {
        if(c < a) break;
        if(c % a == 0 ) con++;
    }
    cout << con << endl;

    return 0;
}

