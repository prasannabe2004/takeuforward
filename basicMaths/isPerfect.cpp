#include <bits/stdc++.h>

using namespace std;

/*
 * Check if a number is a perfect number.
 *
 * Given an integer n, return true if it's a perfect number, otherwise false.
 * A perfect number is a number whose proper divisors (excluding the number
 * itself) add up to the number itself.
 *
 * Example:
 *   Input: n = 6
 *   Output: true
 *   Explanation: Divisors of 6 are 1, 2, 3 and 1 + 2 + 3 = 6
 */

class Solution {
   public:
    bool isPerfect(int n) {
        int result = 0;
        int copy = n;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) result = result + i;
        }
        return result == copy;
    }
};

int main() {
    Solution s;
    cout << s.isPerfect(4) << endl;
    return 0;
}