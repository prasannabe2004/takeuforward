/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1

Print the pattern in the function given to you.
*/

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern11(int n) {
        for(int i = 1; i <= n ; i++) {
            int start = i % 2;
            for(int j = 0 ; j < i ; j++) {
                cout << start ;
                cout << " ";
                start = start ^ 1;
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern11(5);
    return 0;
}