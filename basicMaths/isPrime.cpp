#include <bits/stdc++.h>

using namespace std;

/*
 * Check if a number is prime.
 *
 * Given an integer n, return true if it's a prime number, otherwise false.
 * A prime number has no divisors except 1 and itself.
 *
 * Example:
 *   Input: n = 7
 *   Output: true
 *   Explanation: 7 is only divisible by 1 and 7
 */

class Solution {
   public:
    bool isPrime(int n) {
        if (n == 1) return false;
        for (int i = 2; i < n - 1; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    cout << s.isPrime(14) << endl;
    return 0;
}