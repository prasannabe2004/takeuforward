#include <bits/stdc++.h>

/*
 * Reverse the digits of a number.
 *
 * Given an integer n, return the integer formed by placing the digits in
 * reverse order.
 *
 * Example:
 *   Input: n = 521
 *   Output: 125
 *   Explanation: Reversing the digits of 521 gives 125
 */

class Solution {
   public:
    int reverseNumber(int n) {
        int result = 0;
        while (n > 0) {
            int digit = n % 10;
            result = digit + result * 10;
            n = n / 10;
        }
        return result;
    }
};

using namespace std;

int main() {
    Solution s;
    cout << s.reverseNumber(521) << endl;

    return 0;
}