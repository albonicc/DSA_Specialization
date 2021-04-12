/*
    Author: Nicolas Albo
    Compiler Flags: g++ -pipe -O2 -std=c ++14 BinarySearch.cpp -lm
    
    Runtime: Theta(n) = log2(n)
*/

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int binarySearch(vector<int> aVector, int low, int high, int key) 
{
    int mid = 0;
    
    while(low <= high) 
    {
        mid = low + floor((high - low) / 2);

        if(key == aVector[mid])
        {
            return mid;
        }
        else if(key < aVector[mid])
        {
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main() 
{
    int n = 0; // # of elements in a sorted array
    int k = 0; // # of elements we are going to search in an array
    int a = 0; 
    int b = 0;

    vector<int> aVector; // Array of sorted nums in increasing order

    cin >> n;

    for(int i = 0; i < n; i++)
    {   
        cin >> a;
        aVector.push_back(a);
    }

    cin >> k;

    for(int i = 0; i < k; i++)
    {
        cin >> b; 
        cout << binarySearch(aVector, 0, n - 1, b) << " ";
    }
}