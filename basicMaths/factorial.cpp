#include <bits/stdc++.h>

/*
You are given an integer n. Return the value of n! or n factorial.
Factorial of a number is the product of all positive integers less than or equal to that number.*/

class Solution {
public:
    int factorial(int n) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }
};

using namespace std;
    
int main() {
    Solution s;
    cout << s.factorial(5) << endl;
    return 0;
}