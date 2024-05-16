// Given an array of integers arr,
// return true if the number of occurrences of each value in the array is unique or false otherwise.

// constraints
//  1 <= arr.length <= 1000
//  -1000 <= arr[i] <= 1000

// example
//  Input: arr = [1,2,2,1,1,3]
//  Output: true
//  Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

#include <iostream>
#include <vector>
using namespace std;

bool UniqeOccurence(int arr[], int size)
{
    //Assuming the maximum number of elements in an array
    const int max_number = 1000;

    //Array for counting occurenece of each value
    int count[max_number] = {0};

    //calculating the occurence of each value in an array
    for(int i = 0; i < size; i++) {
        count[arr[i]]++;
    };

    //performing xor
    int xorNumber = 0;
    for(int i = 0; i < max_number; i++) {
        xorNumber ^= count[i];
    };

    //if the xor count is zero that means all the counts are same
    return xorNumber == 0;
};

int main() {
    int arr[] = {1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool result = UniqeOccurence(arr, size);
    std::cout << std::boolalpha << "Result: " << result << std::endl;
};
