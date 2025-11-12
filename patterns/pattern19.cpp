/*
Given an integer n. You need to recreate the pattern given below for any value
of N. Let's say for N = 5, the pattern should look like as below:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

Print the pattern in the function given to you.
*/

#include <iostream>

using namespace std;

class Solution {
   public:
    void pattern19(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                cout << "*";
            }
            for (int k = 0; k < i * 2; k++) {
                cout << " ";
            }
            for (int j = 0; j < n - i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i + 1; j++) {
                cout << "*";
            }
            for (int k = 0; k < (n - 1 - i) * 2; k++) {
                cout << " ";
            }
            for (int j = 0; j < i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern19(5);
    return 0;
}