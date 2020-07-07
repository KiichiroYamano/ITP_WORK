#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string card_t,card_h;
    int point_t = 0,point_h = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> card_t >> card_h;
        if( card_t > card_h) point_t += 3;
        else if(card_t < card_h) point_h += 3;
        else
        {
            point_t++;
            point_h++;
        }
    }
    cout << point_t << " " << point_h << endl;
    
    return 0;
}


