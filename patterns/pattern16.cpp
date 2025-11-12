/*
Given an integer n. You need to recreate the pattern given below for any value
of N. Let's say for N = 5, the pattern should look like as below:

A
BB
CCC
DDDD
EEEEE

Print the pattern in the function given to you.
*/

#include <iostream>

using namespace std;

class Solution {
   public:
    void pattern16(int n) {
        char k = 'A';
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << char(k);
            }
            k++;
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern16(5);
    return 0;
}