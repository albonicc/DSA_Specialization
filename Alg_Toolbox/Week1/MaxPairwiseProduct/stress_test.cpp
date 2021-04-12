#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long max_pairwise_product_naive(vector<long long> vec)
{
    long long product = 0;
    for(long long i=0; i<vec.size(); i++)
        for(long long j = i + 1; j<vec.size(); j++)
        {
            if(product < vec[i]*vec[j])
            {
                product = vec[i]*vec[j];
                // cout << "El producto es: "<< product << endl;
            }
        }
    return product;
}

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

    // cin >> a;
    while(true)
    {
        long long o_naive = 0;
        long long o_fast = 0;
        a = rand() % 100 + 1;
        cout << a << endl;
        for(int i=0; i<a; i++)
        {
            // cin >> b;
            b = rand() % 100000000 + 1;
            v.push_back(b);
        }
        o_naive = max_pairwise_product_naive(v);
        o_fast = max_pairwise_product_fast(v);

        if(o_naive == o_fast)
        {
            
            cout << "OK" << endl;
        }
        else
        {
            for(int j = 0; j<v.size(); j++)
                cout << v[j]<< ' ';

            cout << "\n" << o_naive << "n:f" << o_fast << endl;
            break;
        }
    }


    // cout << "vec: " << endl;
   
    
    // while(true)
    //     cout << rand() % 10 + 1<< endl;
}