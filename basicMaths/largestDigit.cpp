#include <bits/stdc++.h>

/*
 * Find the largest digit in a number.
 *
 * Given an integer n, return the largest digit present in the number.
 *
 * Example:
 *   Input: n = 4329
 *   Output: 9
 *   Explanation: The largest digit in 4329 is 9
 */

using namespace std;

class Solution {
   public:
    int largestDigit(int n) {
        int result = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            result = max(result, lastDigit);
            n = n / 10;
        }
        return result;
    }
};

int main() {
    Solution s;
    cout << s.largestDigit(0) << endl;
    return 0;
}