/*
 * Print an inverted right triangle pattern of stars.
 * 
 * Given an integer n, print an inverted right triangle where row i has (n-i) stars.
 * 
 * Example:
 *   Input: n = 5
 *   Output:
 *     *****
 *     ****
 *     ***
 *     **
 *     *
 */

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern5(int n) {
        for(int i = 0; i < n ; i++) {
            for(int j = 0; j < n - i ;j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern5(5);
    return 0;
}