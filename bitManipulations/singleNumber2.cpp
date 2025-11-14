#include <algorithm>
#include <cstdint>
#include <iostream>
#include <tuple>

using namespace std;

/*
Given an array of integers, every element appears thrice except for one which
occurs once. Find that element which does not appear thrice. NOTE: Your
algorithm should have a linear runtime complexity. Could you implement it
without using extra memory?

Example :
Input : [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Output : 4
*/
class Solution {
   public:
    int singleNumber2(vector<int>& nums) {
        // your code goes here
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] = m[nums[i]] + 1;
        }
        for (auto i : m) {
            if (i.second == 1) {
                return i.first;
            }
        }
        return -1;
    }
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < 32; i++) {
            int sum = 0;
            for (auto n : nums) {
                sum += (n >> i) & 1;
            }
            if (sum % 3) {
                result |= 1 << i;
            }
        }
        return result;
    }
    int singleNumber3(vector<int>& nums) {
        int ones = 0, twos = 0;
        for (int i = 0; i < nums.size(); i++) {
            ones = (ones ^ nums[i]) & ~twos;
            twos = (twos ^ nums[i]) & ~ones;
        }
        return ones;
    }
    int singleNumber4(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size() - 2) {
            if (nums[i] != nums[i + 2]) {
                return nums[i];
            }
            i += 3;
        }
        return nums[nums.size() - 1];
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 4, 3, 3, 2, 2, 3, 1, 1};
    cout << s.singleNumber3(nums) << endl;
    return 0;
}
