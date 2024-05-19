// find the number of occurence of a number k using binary search

#include <iostream>
using namespace std;

int findfirstOcurence(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int ans1 = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == k)
        {
            ans1 = mid;
            end = mid - 1; // Continue searching to the left for first occurence
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans1;
};

int findLasttOcurence(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int ans2 = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == k)
        {
            ans2 = mid;
            start = mid + 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans2;
};

int main()
{
    int arr[8] = {1, 2, 3, 3, 3, 3, 5, 5};
    int size = 8;
    int k = 5;

    int answer1 = findfirstOcurence(arr, size, k);
    int answer2 = findLasttOcurence(arr, size, k);

    int Number = (answer2 - answer1) + 1; // formula for finding the number od occurence of k

    cout << Number;

    return 0;
};