#include <bits/stdc++.h>

using namespace std;

/*
You are given an integer n. You need to check if the number is a perfect number or not. 
Return true if it is a perfect number, otherwise, return false.
A perfect number is a number whose proper divisors (excluding the number itself) add 
up to the number itself.
*/

class Solution {
public:
    bool isPerfect(int n) {
        int result = 0;
        int copy = n;
        for(int i = 1; i < n; i++) {
            if(n%i == 0)
                result = result + i;
        }
        return result == copy;
    }
};


    
int main() {
    Solution s;
    cout << s.isPerfect(4) << endl;
    return 0;
}