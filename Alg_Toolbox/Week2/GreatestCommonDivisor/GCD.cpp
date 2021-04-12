#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int a_prime = 0;

    if (b == 0)
    {
        return a;
    }
    else
    {
        a_prime = a % b;
        return gcd(b, a_prime);
    }
}

int main()
{
    int a,b = 0;

    cin >> a;
    cin >> b;

    cout << gcd(a, b) << endl;
}