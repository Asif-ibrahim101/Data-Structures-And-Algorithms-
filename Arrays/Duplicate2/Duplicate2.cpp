// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice,
// return an array of all the integers that appears twice.
// You must write an algorithm that runs in O(n) time and uses only constant extra space.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> FindDuplicate(vector<int>& nums) {
    vector<int> duplicates; //for storing the duplicate values

    for(int num : nums) {
        int index = abs(num) -1;
        if(nums[index] < 0) {
            duplicates.push_back(abs(num));
        }else{
            nums[index] = -nums[index];
        }
    };

    return duplicates;
};

int main()
{
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> duplicates = FindDuplicate(nums);

    for(int duplicate: duplicates) {
        cout << duplicate << " ";
    };

    cout << endl;
};