/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

Print the pattern in the function given to you.
*/

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern17(int n) {
        for(int i = 1; i <= n ; i++) {
            for(int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            char c = 'A';
            for(int j = 0; j < i; j++) {
                cout << char(c);
                c = c + 1;
            }
            c = c - 2;
            for(int k = 1; k < i; k++) {
                cout << char(c);
                c = c - 1;
            }
            for(int p = 1; p <= n - i; p++) {
                cout << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern17(7);
    return 0;
}