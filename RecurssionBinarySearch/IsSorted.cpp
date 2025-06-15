#include <iostream>
using namespace std;

bool IsSorted(int *arr, int size) {

  //base case
  if (size == 0 || size == 1) {
    return true;
  }
  if (arr[0] > arr[1]) {
    return false;
  }else {
    bool Rest_of_the_array = IsSorted(arr+1, size - 1);
    return Rest_of_the_array;
  };
};

int main() {
  int arr[5] = {2,1,4,6,0};
  bool ans = IsSorted(arr, 5);

  if (ans) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }


}