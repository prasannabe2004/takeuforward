#include <bits/stdc++.h>

/*
You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
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
};

using namespace std;
    
int main() {
    Solution s;
    cout << s.reverseNumber(521) << endl;

    return 0;
}