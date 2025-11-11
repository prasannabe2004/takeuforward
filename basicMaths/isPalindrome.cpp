#include <bits/stdc++.h>

/*
 * Check if a number is a palindrome.
 * 
 * Given an integer n, return true if it's a palindrome number, otherwise false.
 * A palindrome number reads the same both left to right and right to left.
 * 
 * Example:
 *   Input: n = 121
 *   Output: true
 *   Explanation: 121 reads the same forwards and backwards
 */

class Solution {
public:
    int reverseNumber(int n) {
        int result = 0;
        while(n > 0) {
            int digit = n % 10;
            result = digit + result * 10;
            n = n / 10;
        }
        return result;
    }
    bool isPalindrome(int n) {
        return reverseNumber(n) == n;
    }
};

using namespace std;
    
int main() {
    Solution s;
    cout << s.isPalindrome(5215) << endl;
    return 0;
}