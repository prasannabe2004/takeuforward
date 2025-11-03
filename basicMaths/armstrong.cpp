#include <bits/stdc++.h>
#include <math.h>

/*
You are given an integer n. You need to check whether it is an armstrong number or not. 
Return true if it is an armstrong number, otherwise return false.
An armstrong number is a number which is equal to the sum of the digits of the number, 
raised to the power of the number of digits.
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