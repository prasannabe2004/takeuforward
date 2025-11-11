#include <bits/stdc++.h>
#include <math.h>

/*
 * Check if a number is an Armstrong number.
 * 
 * An Armstrong number is a number which is equal to the sum of its digits
 * raised to the power of the number of digits.
 * 
 * Example:
 *   Input: n = 153
 *   Output: true
 *   Explanation: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
 */

using namespace std;

class Solution {
public:
    int length(int n) {
        int len = 0;
        while(n > 0) {
            len++;
            n = n / 10;
        }
        return len;
    }
    bool isArmstrong(int num) {
        int n = num;
        int result = 0;
        int l = length(n);
        while(n > 0) {
            result = result + pow(n % 10, l);
            n = n / 10;
        }
        return result == num;
    }
};


    
int main() {
    Solution s;
    cout << s.isArmstrong(53) << endl;
    return 0;
}