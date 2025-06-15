//find the sum of the array using reccursion

#include <iostream>
using namespace std;

int Sum_of_the_array(int const arr[], int size) {
  if (size == 0) {
    return 0;
  }else if (size == 1) {
    return arr[0];
  }

  //refcurssion process
  int const sum = arr[0];
  int const test_array_sum = Sum_of_the_array(arr+1, size-1);
  return sum + test_array_sum;
}

int main() {
  int const arr[5] = {1,2,3,4,5};
  cout << Sum_of_the_array(arr, 5) << endl;
};