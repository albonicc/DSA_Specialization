#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long max_pairwise_product_fast(vector<long long> vec)
{
    long long product = 0;
    sort(vec.begin(), vec.end());

    // for(auto x:vec)
    //     cout << x << ' ';
    product = vec[vec.size()-1] * vec[vec.size()-2];
    return product;
}

int main()
{
    int a, b;
    vector<long long> v; 
    long long o;

    cin >> a;
    for(int i=0; i<a; i++)
    {
        cin >> b;
        v.push_back(b);
    }
    
    o = max_pairwise_product_fast(v);
    cout << o << endl;
}