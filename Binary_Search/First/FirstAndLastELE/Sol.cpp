// You have been given a sorted array/list 'arr'
// consisting of ‘n’ elements. You are also given an integer ‘k’.

// your task is to find the first and last occurrence of ‘k’ in 'arr'.

// Input: 'arr' = [0,1,1,5] , 'k' = 1
// Output: 1 2

#include <iostream>
using namespace std;

int FindFirstOccurrence(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int ans = -1;
    
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;  // Continue searching to the left
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
    
    return ans;
};

int FindLastOccurrence(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int ans = -1;
    
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == k)
        {
            ans = mid;
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
    
    return ans;
};

int main()
{
    int arr[5] = {1, 2, 3, 3, 5};
    int size = 5;
    int k = 3;
    int FindFirst = FindFirstOccurrence(arr, size, k);
    int FindLast = FindFirstOccurrence(arr, size, k);

    
    //printing out the result
    cout << "the number is: " << FindFirst;
    cout << "the number is: " << FindLast;

    return 0;
};