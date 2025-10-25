#include <bits/stdc++.h>

/*
You are given an integer n. You need to return the number of odd digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.
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