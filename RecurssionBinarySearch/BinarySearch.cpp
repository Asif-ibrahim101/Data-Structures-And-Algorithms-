#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int start, int end, int k) {

  //base case
  if (start > end) {
    return false;
  }

  int Mid = start + (end - start) / 2;

  if(arr[Mid] == k) {
    return true;
  }
  //recurssion process
  if (arr[Mid] > k) {
    return BinarySearch(arr, start, Mid - 1, k);
  }else{
    return BinarySearch(arr, Mid + 1, end, k);
  }
}

int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int key = 21;

 cout << BinarySearch(arr, 0, 5, key) << endl;

}