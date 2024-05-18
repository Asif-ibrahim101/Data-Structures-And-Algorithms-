// Binary Search

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // int mid = (start + end)/ 2; //this is one way of finding mid
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            // we have to go the the right so we have to do mid + 1 to the starting value
            start = mid + 1;
        }
        else
        {
            // we have to go the the left so we have to do mid - 1 to the starting value
            end = mid - 1;
        };
        mid = start + (end - start) / 2;
    };

    return -1;
};

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[6] = {3, 8, 11, 14, 16};

    int Evenindex = BinarySearch(even, 6, 12);
    int Oddindex = BinarySearch(odd, 6, 14);

    cout << "index of even: " << Evenindex << endl;
    cout << "index of odd: " << Oddindex;
};