#include <bits/stdc++.h>

/*
 * Count the number of digits in an integer.
 *
 * Given an integer n, return the total count of digits.
 * The number will have no leading zeroes, except when the number is 0 itself.
 *
 * Example:
 *   Input: n = 12345
 *   Output: 5
 *   Explanation: The number 12345 has 5 digits
 */

class Solution {
   public:
    int countDigit(int n) {
        int count = 0;
        while (n > 0) {
            n = n / 10;
            count++;
        }
        return count;
    }
};

using namespace std;

int main() {
    Solution s;
    cout << s.countDigit(12345) << endl;

    return 0;
}