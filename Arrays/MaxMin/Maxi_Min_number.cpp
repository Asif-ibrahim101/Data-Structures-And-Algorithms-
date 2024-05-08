// from an array find the max and min numbers
// minimum value goes to INT_MIN and maximum value goes to INT_MAX
// which range is -2^31 - 2^31

#include <iostream>
#include <climits>
using namespace std;

int MaxNumber(int num[], int n)
{
    int Max_number = INT_MIN;

    for (int i = 0; i < n; i++)
    {
       //built in function for finding max number form an array
       Max_number = max(Max_number, num[i]);
    };

    return Max_number;
};

int MinNumber(int num[], int n)
{
    int Min_number = INT_MAX;

    for (int i = 0; i < n; i++)
    {
       //built in function for finding min number form an array
        Min_number = min(Min_number, num[i]);
    };

    return Min_number;
}

int main()
{
    int size;
    cin >> size;

    int number[10];

    // taking the array as an input
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    };

    cout << "Maximun: " << " " << MaxNumber(number, size) << " " << "Minmum: " << " " << MinNumber(number, size);
};