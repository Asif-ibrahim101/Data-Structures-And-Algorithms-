#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size) {
    //base case
    if(size == 0 || size == 1){
        return;
    }

    //recurssion call
    for(int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    };

    BubbleSort(arr, size - 1);
}

int main() {
    int arr[5] = {5,2,8,1,6};  // Unsorted array for testing

    cout << "Before sorting: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    BubbleSort(arr, 5);

    cout << "After sorting: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}