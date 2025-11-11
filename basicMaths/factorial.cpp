#include <bits/stdc++.h>

/*
 * Calculate the factorial of a number.
 * 
 * Given an integer n, return n! (n factorial).
 * Factorial of a number is the product of all positive integers less than or equal to that number.
 * 
 * Example:
 *   Input: n = 5
 *   Output: 120
 *   Explanation: 5! = 5 × 4 × 3 × 2 × 1 = 120
 */

class Solution {
public:
    int factorial(int n) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }
};

using namespace std;
    
int main() {
    Solution s;
    cout << s.factorial(5) << endl;
    return 0;
}