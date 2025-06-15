//finding the factorial
#include <iostream>
using namespace std;

int Factorial(int const n) {
    //base case or recursion relation

    if (n < 0) {
        cout << "Factorial of negative numbers is not defined";
    }else if (n ==
        0) {
        return 1;
    };

    //process
    return n * Factorial(n - 1); //formula of factorial is f(n) = n * f(n - 1)
};

int main() {
   int number;
   cout << "Enter a number: ";
   cin >> number;

   cout << "Factorial of the number" << number << " is " << Factorial(number);
};