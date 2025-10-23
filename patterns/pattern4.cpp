/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1
22
333
4444
55555

Print the pattern in the function given to you.
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