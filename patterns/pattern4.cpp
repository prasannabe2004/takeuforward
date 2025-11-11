/*
 * Print a right triangle pattern with repeated row numbers.
 * 
 * Given an integer n, print a pattern where row i has the number i repeated i times.
 * 
 * Example:
 *   Input: n = 5
 *   Output:
 *     1
 *     22
 *     333
 *     4444
 *     55555
 */

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern4(int n) {
        for(int i = 0; i < n ; i++) {
            for(int j = 0; j < i + 1 ;j++) {
                cout << i + 1;
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern4(5);
    return 0;
}