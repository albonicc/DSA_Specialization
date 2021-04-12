#include <iostream>
using namespace std;

int main()
{   
    int coin1 = 1;
    int coin5 = 5;
    int coin10 = 10;
    int m = 0;
    int minNumCoins = 0;
    
    cin >> m;

    while(m > 0)
    {
        if (m % coin10 == 0)
        {
            m -= coin10;
            minNumCoins++;
        }
        else if (m % coin5 == 0)
        {
            m -= coin5;
            minNumCoins++;
        }
        else
        {
            m -= coin1;
            minNumCoins++;
        }
    }

    cout << minNumCoins;

    return 0;
}