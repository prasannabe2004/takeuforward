#include <bits/stdc++.h>

/*
 * Find the most frequent element in an array.
 *
 * Given an array nums of n integers, find the element that occurs the maximum
 * number of times. If there are multiple elements with the same maximum
 * frequency, return the smallest one.
 *
 * Example:
 *   Input: nums = [1, 2, 2, 3, 3, 3]
 *   Output: 3
 *   Explanation: 3 appears 3 times, which is the maximum frequency
 */
#include <algorithm>
#include <vector>

class Solution {
   public:
    int mostFrequentElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxCount = 1;
        int maxNum = nums[0];
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            // cout << nums[i-1] << " " << " max = " << maxNum << " count = " <<
            // maxCount << endl;
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            if (count > maxCount || (count == maxCount && nums[i] < maxNum)) {
                maxCount = count;
                maxNum = nums[i - 1];
            }
        }
        return maxNum;
    }
};

using namespace std;

int main() {
    Solution s;
    vector<int> nums = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,
                        1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000,
                        1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000,
                        1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000,
                        1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000};
    cout << s.mostFrequentElement(nums) << endl;

    return 0;
}