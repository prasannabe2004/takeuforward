/*
 * Print a diamond-like pattern of stars.
 * 
 * Given an integer n, print a pattern that increases from 1 to n stars,
 * then decreases back to 1 star.
 * 
 * Example:
 *   Input: n = 5
 *   Output:
 *     *
 *     **
 *     ***
 *     ****
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
    void pattern10(int n) {
        for(int i = 0; i < n ; i++) {
            for(int j = 0; j < i + 1 ;j++) {
                cout << "*";
            }
            cout << endl;
        }
        for(int i = 0; i < n - 1 ; i++) {
            for(int j = 0; j < n - i - 1 ;j++) {
                cout << "*";
            }
            cout << endl;
        } 
    }
};

int main() {
    Solution s;
    s.pattern10(5);
    return 0;
}