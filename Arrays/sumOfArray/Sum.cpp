// find the sum of all elements in an array

#include <iostream>
using namespace std;

int Sum(int arr[], int num)
{
    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    };

    return sum;
};

int main()
{
    int size;
    cin >> size;

    int numbers[100];

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    };

    cout << "the sum of the array is : " << "  " << Sum(numbers, size);
};