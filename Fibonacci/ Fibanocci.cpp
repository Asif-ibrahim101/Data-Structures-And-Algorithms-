#include <iostream>
using namespace std;

class Solution {
    public:
        int fib(int n) {
            //base case
            if (!n) {
                return n;
            };

            int a = 0;
            int b = 1;

            for (int i = 2; i <= n; i++ ) {
                int c = a + b;
                a = b;
                b = c;
            };

            return b;
        }

};


//solving using ittration
int main() {
    Solution sol; // Create an instance of your Solution class
    int n = 2;
    cout << sol.fib(n);
};