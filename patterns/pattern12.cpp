/*
Given an integer n. You need to recreate the pattern given below for any value
of N. Let's say for N = 5, the pattern should look like as below:

1        1
12      21
123    321
1234  4321
1234554321

Print the pattern in the function given to you.
*/

#include <iostream>

using namespace std;

class Solution {
   public:
    void pattern12(int n) {
        for (int i = 1; i <= n; i++) {
            for (int k = 1; k <= i; k++) {
                cout << k;
            }
            for (int j = (2 * n) - (2 * i); j > 0; j--) {
                cout << " ";
            }
            for (int k = i; k > 0; k--) {
                cout << k;
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern12(5);
    return 0;
}