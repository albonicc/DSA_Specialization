#include <iostream>
using namespace std;


int fiboDigit(int n)
{
    int num[n];
    int a,b = 0;
    int c = 1;
    num[0] = 0;
    num[1] = 1;
    
    for(int i = 2; i < (n + 1); i++)
    {   
        a = num[i - 1] % 10;
        b = num[i - 2];
        num[i] = (a + b) % 10;
    }
    return num[n];
}

int main() 
{
    int n,f = 0;
    cin >> n;
    cout << fiboDigit(n) << endl;
}