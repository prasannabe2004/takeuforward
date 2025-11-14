#include <algorithm>
#include <cstdint>
#include <iostream>
#include <tuple>

using namespace std;

/*
Given a non-empty array of integers nums, every element appears twice except

Example 1:
Input: nums = [2,2,1]
*/
class Solution {
   public:
    int singleNumber(vector<int>& nums) {
        // your code goes here
        int res = 0;
        for (auto i : nums) {
            res = res ^ i;
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 2, 1};
    cout << s.singleNumber(nums) << endl;
    return 0;
}
