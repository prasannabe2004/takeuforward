/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



*****
*   *
*   *
*   *
*****


Print the pattern in the function given to you.
*/

#include <iostream>

using namespace std;

class Solution {
public:
    void pattern21(int n) {
        for(int i = 0; i < n ; i++) {
            if(i == 0 || i == n -1) {
                for(int j = 0; j < n ;j++) {
                    cout << "*";
                }
            }
            else {
                cout << '*';
                for(int j = 0; j < n - 2; j++) {
                    cout << ' ';
                }
                cout << '*';
            }
            cout << endl;
        }
    }
};

int main() {
    Solution s;
    s.pattern21(5);
    return 0;
}