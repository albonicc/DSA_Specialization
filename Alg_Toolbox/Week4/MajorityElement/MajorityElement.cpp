/*
    Author: Nicolas Albo
    Compiler Flags: g++ -pipe -O2 -std=c++14 MajorityElement.cpp -lm
    
    Runtime: O(log(n))
*/


#include <iostream>
#include <vector>

using namespace std;

int countElements(int currentElement, vector<int> halfArray)
{
    int counter = 0;
    for(auto i : halfArray)
    {
        if(i == currentElement)
        {
            counter++;
        }
    }
    
    return counter;
}

int checkMajority(int index, vector<int> halfArray) 
{
    int count = 0;
    int currentElement = 0;
    int n = halfArray.size();

    currentElement = halfArray[index];
    count = countElements(currentElement, halfArray);
    // cout << "Estoy aqui ";
    // cout << index << endl;
    cout << "currentEl: " << currentElement << endl;
    cout << "count 1: " << count << endl;
    if(count > n/2)
    {
        // cout << "se cumple" << endl;
        // cout << "count: " << count << endl;
        // cout << "currentEl: " << currentElement << endl;
        // cout << "Index: " << index << endl;

        return 1;
    }
    else
    {   
        // cout << index << " " << halfArray.size() << endl;
        // for(auto i : halfArray)
        // {
        //     cout << "element: " << i << endl;
        // }
        // if(index < halfArray.size() + 1)
        // {
        //     index++;
        //     checkMajority(index, halfArray);
        // }
        index++;
        checkMajority(index, halfArray);
    }
    cout << "count 2: " << count << endl;


    // if(count < n/2)
    // {
    //     // cout << "llegué aqui" << endl;
    //     // cout << "count: " << count << endl;
    //     // cout << "currentEl: " << currentElement << endl;
    //     // cout << "Index: " << index << endl;

    //     return 0;
    // }
    return 0;
}

int main()
{
    int n = 0;
    int a = 0;
    int j = 0;
    int k = 0;
    int result1 = 0;
    int result2 = 0;
    double middle = 0;

    vector<int> elements;

    cin >> n;

    for(int i = 0; i < n; i++)
    {   
        cin >> a;
        elements.push_back(a);
    }

    middle = elements.size() / 2;
    vector<int> upperHalf(elements.begin(), elements.begin() + middle);
    vector<int> lowerHalf(elements.begin() + middle, elements.end());


    // Debugging
    // for(auto i : upperHalf)
    // {
    //     cout << i;
    // }

    // cout << "\n";

    // for(auto i : lowerHalf)
    // {
    //     cout << i;
    // }

    // result1 = checkMajority(0, upperHalf);
    result2 = checkMajority(0, lowerHalf);
    cout << result2 << endl;

}