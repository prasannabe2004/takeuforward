/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

ABCDE
ABCD
ABC
AB
A

Print the pattern in the function given to you.
*/

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern15(int n) {
        for(char i = 1; i <= n; i++) {
            for(int j = 0; j < n - i + 1; j++) {
                cout << char('A' + j);
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern15(5);
    return 0;
}