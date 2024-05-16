#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> Array = {1, 1, 2, 0, 0};
    sort(Array.begin(), Array.end());

    for(const int &element : Array) {
        cout << element;
    };

    cout << endl;
};