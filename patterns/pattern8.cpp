/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*********
 *******
  *****
   ***
    *

Print the pattern in the function given to you.
*/

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern8(int n) {
         for(int i = 0; i < n ; i++) {
            for(int j = 0; j < i; j++) {
                cout << " ";
            }
            for(int j = 0; j < (2*(n - i) - 1); j++) {
                cout << "*";
            }
            for(int j = 0; j < i; j++) {
                cout << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern8(5);
    return 0;
}