//LenearSearch with recurssion

#include <iostream>
using namespace std;

bool Ruccorsion_leanerSearch(int const arr[], int const size, int const find) {
  //base case

  if (size == 0) {
    return false;
  }

  if (arr[0] == find) {
    return true;
  }

  //recursion process
  int const finder = Ruccorsion_leanerSearch(arr+1, size-1, find);
  return finder;
}


int main() {
  int const arr[5] = {1, 2, 3, 4, 5};
  int const find = 7;

  bool ans = Ruccorsion_leanerSearch(arr, 5, find);

  if(ans) {
    cout << "present" << endl;
  }else {
    cout << "not present" << endl;
  }
};