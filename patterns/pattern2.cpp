/*
 * Print a right triangle pattern of stars.
 *
 * Given an integer n, print a right triangle pattern where row i has i stars.
 *
 * Example:
 *   Input: n = 5
 *   Output:
 *     *
 *     **
 *     ***
 *     ****
 *     *****
 */

#include <iostream>

using namespace std;

class Solution {
   public:
    void pattern2(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern2(5);
    return 0;
}