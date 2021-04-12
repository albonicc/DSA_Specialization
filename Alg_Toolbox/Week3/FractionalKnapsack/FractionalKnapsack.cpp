#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item
{
    double v;
    double w;
};

bool comparateVPURatios(struct Item a, struct Item b)
{
    double VPU1 = a.v / a.w;
    double VPU2 = b.v / b.w;

    return VPU1 > VPU2;
}

double min(int a, int b)
{
    if (a > b)
    {   
        return b;
    }
    else
    {   
        return a;
    }
}

double FractionalKnapsack(struct vector<Item> items, int n, int W) 
{
    double a, V = 0;

    sort(items.begin(), items.end(), comparateVPURatios);

    for(int i = 0; i < items.size(); i++)
    {
        if(W == 0)
        {
            return V;
        }

        a = min(items[i].w, W);
        V += (a * (items[i].v/items[i].w));
        W -= a;
    }

    return V;
}

int main()
{
    int n, W = 0;
    double V, v, w = 0;

    cin >> n;
    cin >> W;

    vector<Item> items;

    for(int i = 0; i < n; i++)
    {
        cin >> v;
        cin >> w;

        Item item = {v, w};

        items.push_back(item);   
    }

    V = FractionalKnapsack(items, n, W);
    printf("%.4f", V);

    return 0;
}