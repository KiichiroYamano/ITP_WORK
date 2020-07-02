#include<iostream>
using namespace std;

int main(){

    long long n, x, max=-1000000, min=1000000, sum=0;
    cin >> n;

    for(long i = 0; i < n; i++)
    {
        cin >> x;
        if(max < x) max = x;
        if(min > x) min = x;
        sum += x;
    }
    cout << min << " " << max << " " << sum << endl;
    
    return 0;
}
