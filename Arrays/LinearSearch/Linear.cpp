// Linear Search

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
};

int main()
{
    int arr[5] = {5, 7, 8, 1, 2};

    cout << "enter the elem to search" << endl;

    int key;
    cin >> key;

    bool found = search(arr, 5, key);

    if (found)
    {
        cout << "found the elem" << endl;
    }
    else
    {
        cout << "not found :(" << endl;
    }
};