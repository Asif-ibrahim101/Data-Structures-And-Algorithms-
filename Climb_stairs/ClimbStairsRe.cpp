#include <iostream>
using namespace std;

int climbStairs(int n) {
  //base cases
  if(n == 0) {
    return 1;
  };

  if (n == 1) {
    return 1;
  }

  int a = 1;
  int b = 1;

  for (int i = 2; i <= n; i++) {
    int c = a + b;
    a = b;
    b = c;
  }
  return b;
};

int main() {
  int n;
  cout << "give me an number" << endl;
  cin >> n;

  cout << climbStairs(n) << endl;
}