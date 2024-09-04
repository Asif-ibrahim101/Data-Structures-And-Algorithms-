#include <iostream>
#include <vector>
using namespace std;

vector<int> Swap(vector<int> arr, int size) {
    for(int i = 0; i < size; i+=2) {
        if(i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        };
    };

    for(int i = 0; i < size; i++) {
        cout << arr[i];
    };

    return arr;
};

int main() {
    vector<int> even = {1, 3, 5, 6 ,7, 8};
    vector<int> odd = {1, 3, 5, 6 ,7};
    int size = even.size();
    int size1 = odd.size();

    Swap(even, size);
    Swap(odd, size1);
};