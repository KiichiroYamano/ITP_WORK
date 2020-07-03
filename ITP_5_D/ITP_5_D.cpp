#include<iostream>
using namespace std;

int main(){

    int n,i=1,x;
    cin >> n;

    while (1)
    {
        x = i;
        if(x % 3 == 0)
        {
            cout << " " << i;
        }
        else
        {
            while(1)
            {
                if(x % 10 == 3)
                {
                    cout << " " << i;
                    break;
                }
                else
                {
                    x /= 10;
                    if(x==0) break; 
                }  
            }
        }
        if(++i > n) break;
    }
    cout << endl;
    
    return 0;
}
