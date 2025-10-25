#include <bits/stdc++.h>

/*
You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
A palindrome number is a number which reads the same both left to right and right to left.*/

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