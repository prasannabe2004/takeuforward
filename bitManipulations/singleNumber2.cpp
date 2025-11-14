#include <algorithm>
#include <cstdint>
#include <iostream>
#include <tuple>

using namespace std;

/*
Given two integers start and goal, return the minimum number of bit flips

Example 1:
Input: start = 10, goal = 7
*/
class Solution {
   public:
    int minBitsFlip(int start, int goal) {
        // Your code goes here
        int n = start ^ goal;
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if (n & 1) count++;
            n = n >> 1;
        }
        return count;
    }
};

int main() {
    Solution s;
    int start = 10;
    int goal = 7;
    cout << s.minBitsFlip(start, goal) << endl;
    return 0;
}
