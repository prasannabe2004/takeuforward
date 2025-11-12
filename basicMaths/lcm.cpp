#include <bits/stdc++.h>

using namespace std;

/*
 * Find the Lowest Common Multiple (LCM) of two numbers.
 *
 * Given two integers n1 and n2, return their LCM.
 * The LCM is the smallest positive integer that is divisible by both numbers.
 *
 * Example:
 *   Input: n1 = 4, n2 = 6
 *   Output: 12
 *   Explanation: 12 is the smallest number divisible by both 4 and 6
 */

class Solution {
   public:
    int lcm(int a, int b) {
        int lar = max(a, b);
        int small = min(a, b);
        for (int i = lar;; i += lar) {
            if (i % small == 0) return i;
        }
    }
};

int main() {
    Solution s;
    cout << s.lcm(4, 6) << endl;
    return 0;
}