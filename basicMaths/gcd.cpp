#include <bits/stdc++.h>

using namespace std;

/*
You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers.
Return the GCD of the two numbers.

The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.
*/

class Solution
{
public:
    int gcd(int n1, int n2)
    {
        int gcd = 1;
        int greatest = n1 > n2 ? n1 : n2;
        for (int i = 1; i <= greatest; i++)
        {
            if (((n1 % i) == 0) && ((n2 % i) == 0))
            {
                gcd = i;
            }
        }
        return gcd;
    }
};

int main()
{
    Solution s;
    cout << s.gcd(4, 5) << endl;
    return 0;
}