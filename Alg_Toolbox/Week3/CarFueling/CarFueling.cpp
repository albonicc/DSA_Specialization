#include <iostream>
#include <vector>

using namespace std;

int MinRefills(vector<int> x, int n, int m)
{
    // IMPORTANT! Every declaration & initialization MUST be in different lines
    int numRefills = 0;
    int currentRefill = 0;
    int lastRefill;

    while(currentRefill <= n)
    {
        lastRefill = currentRefill;
        while(currentRefill <= n && x[currentRefill + 1] - x[lastRefill] <= m)
        {
            currentRefill++;
        }

        if(currentRefill == lastRefill)
        {            
            return -1;
        }

        if(currentRefill <= n)
        {
            numRefills++;
        }

    }
    

    return numRefills;
}


int main()
{
    int d, m, n, xi, minRefills = 0;
    vector<int> x = {0};

    cin >> d;
    cin >> m;
    cin >> n;

    for(int i = 0; i < n; i++) 
    {
        cin >> xi;
        x.push_back(xi);
    }

    x.push_back(d);

    minRefills = MinRefills(x, n, m);
    cout << minRefills << endl; 

    return 0;
}