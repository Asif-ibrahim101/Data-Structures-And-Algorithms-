#include <iostream>
using namespace std;

bool CheckPalendrome(string word, int i, int j) {
  //base case
  if(i > j) {
    return true;
  };

  if(word[i] != word[j]) {
    return false;
  }else{
    return CheckPalendrome(word, i + 1, j-1);
  }
};

int main() {
 string Word = "121";

 bool isPalindrome = CheckPalendrome(Word, 0, Word.length() - 1);

 if(isPalindrome) {
   cout << Word << " is a palindrome" << endl;
 }else{
   cout << Word << " is not a palindrome" << endl;
 };
 return 0;
}