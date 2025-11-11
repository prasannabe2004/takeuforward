/*
 * Print a square pattern of stars.
 * 
 * Given an integer n, print an n x n square pattern of stars.
 * 
 * Example:
 *   Input: n = 5
 *   Output:
 *     *****
 *     *****
 *     *****
 *     *****
 *     *****
 */

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i = 0; i < n ; i++) {
            for(int j = 0; j < n ;j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern1(5);
    return 0;
}