#include <iostream>
using namespace std;


int fibo(int n)
{
    int num[n];
    int a,b = 0;
    int c = 1;
    num[0] = 0;
    num[1] = 1;
    
    for(int i = 2; i < (n + 1); i++)
    {   
        a = num[i - 1];
        b = num[i - 2];
        num[i] = a + b;
    }
    return num[n];
}

int main() 
{
    int n,f = 0;
    cin >> n;
    cout << fibo(n) << endl;
}