//finding duplicate elemet form an array using xor

#include <iostream>
using namespace std;

int Duplicate(int arr[], int size) {
    //finding the uniqe ele form the array
    int xor_number = 0;

    for(int i  = 0; i < size; i++) {
        xor_number ^= arr[i];
    };

    for(int i = 0; i < size; i++) {
        xor_number ^= i;
    };

    return xor_number;
};

int main() {
    int array[7] = {6,3,1,5,4,3,2};
    cout << Duplicate(array, 7) << " ";
};