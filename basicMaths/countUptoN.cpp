#include <bits/stdc++.h>

using namespace std;

/*
You are given an integer n. 
You need to find out the number of prime numbers in the range [1, n] (inclusive). 
Return the number of prime numbers in the range.

A prime number is a number which has no divisors except, 1 and itself.
*/

class Solution {
public:
    bool isPrime(int n) {
        for(int i = 2; i < n - 1; i++) {
            if(n%i == 0)
                return false;
        }
        return true;
    }
    int primeUptoN(int n) {
        int count = 0;
        for(int i = 2; i <= n; i++) {
            if(isPrime(i)) count++;
        }
        return count;
    }  
};


    
int main() {
    Solution s;
    cout << s.primeUptoN(5) << endl;
    return 0;
}