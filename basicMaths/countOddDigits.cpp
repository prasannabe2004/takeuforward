#include <bits/stdc++.h>

/*
 * Count the number of odd digits in an integer.
 * 
 * Given an integer n, return the count of digits that are odd (1, 3, 5, 7, 9).
 * The number will have no leading zeroes, except when the number is 0 itself.
 * 
 * Example:
 *   Input: n = 12345
 *   Output: 3
 *   Explanation: The odd digits are 1, 3, and 5
 */

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        while(n > 0) {
            int digit = n % 10;
            if(digit%2 == 1)
                count++;
            n = n / 10;
        }
        return count;
    }
};

using namespace std;
    
int main() {
    Solution s;
    cout << s.countDigit(11) << endl;

    return 0;
}