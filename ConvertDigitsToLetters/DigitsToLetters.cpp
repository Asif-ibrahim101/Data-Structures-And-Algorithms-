// an dsigit will be given for example 412 we have to convert it to letters like Four One Two

#include <iostream>
using namespace std;

//using recurssion to solve it
void DigitsToLetters(int n, string words[]) {
  //base case
  if (n == 0) {
    return;
  };

  //procesing
  int digit = n % 10;
  n = n / 10;

  //recursive call
  DigitsToLetters(n, words);
  cout << words[digit] << endl;
};

int main() {
  string words[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
  int n;
  cin >> n;

  cout << endl << endl << endl;
  DigitsToLetters(n, words);
  cout << endl << endl << endl;
};