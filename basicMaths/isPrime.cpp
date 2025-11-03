#include <bits/stdc++.h>

using namespace std;

/*
You are given an integer n. You need to check if the number is prime or not. 
Return true if it is a prime number, otherwise return false.

A prime number is a number which has no divisors except 1 and itself.
*/

class Solution {
public:
    bool isPrime(int n) {
        if(n == 1) return false;
        for(int i = 2; i < n - 1; i++) {
            if(n%i == 0)
                return false;
        }
        return true;
    }
};


    
int main() {
    Solution s;
    cout << s.isPrime(14) << endl;
    return 0;
}