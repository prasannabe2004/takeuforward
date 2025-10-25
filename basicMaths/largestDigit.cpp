#include <bits/stdc++.h>

/*
You are given an integer n. Return the largest digit present in the number.
*/

using namespace std;

class Solution {
public:
    int largestDigit(int n) {
        int result = 0;
        while(n > 0) {
            int lastDigit = n % 10;
            result = max(result, lastDigit);
            n = n / 10;
        }
        return result;
    }
};
    
int main() {
    Solution s;
    cout << s.largestDigit(0) << endl;
    return 0;
}