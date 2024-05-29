//use cases:
//1. when the array size is small

#include <iostream>
#include <vector>
using namespace std;

vector<int> SelectionSort(vector<int>arr, int n) {

    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                minIndex = j;
            };
        };

        swap(arr[minIndex], arr[i]);
    };
};