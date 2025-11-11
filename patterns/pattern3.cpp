/*
 * Print a right triangle pattern of numbers.
 * 
 * Given an integer n, print a right triangle pattern where row i has numbers 1 to i.
 * 
 * Example:
 *   Input: n = 5
 *   Output:
 *     1
 *     12
 *     123
 *     1234
 *     12345
 */

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern3(int n) {
        for(int i = 0; i < n ; i++) {
            for(int j = 0; j < i + 1 ;j++) {
                cout << j + 1;
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern3(5);
    return 0;
}