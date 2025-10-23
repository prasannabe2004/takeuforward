/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

Print the pattern in the function given to you.
*/

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int j = 1 ;
        for(int i = 1; i <= n; i++) {
            for(int k = 0 ; k < i; k++) {
                cout << j;
                if(i > 1)
                    cout << " ";
                j++;
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern13(5);
    return 0;
}