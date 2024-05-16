#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>PairSum(vector<int> &arr1, int num) {
    vector<int>Result;

    for(int i = 0; i < arr1.size(); i++) {
        for(int j = i+1; j < arr1.size(); j++) {
            if(arr1[i] + arr1[j] == num) {
                Result.push_back(min(arr1[i], arr1[j]));
                Result.push_back(max(arr1[i], arr1[j]));
            };
        };
    };
    sort(Result.begin(), Result.end());
    return Result;
};

int main() {
    vector<int> arr = {1, 2, 3, 4 ,5};
    int number = 5;
    vector<int> Output = PairSum(arr, number);

    for (int i = 0; i < Output.size(); i++)
    {
        cout << Output[i] << endl;
    };
    return 0;
}