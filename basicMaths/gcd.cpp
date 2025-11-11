#include <bits/stdc++.h>

using namespace std;

/*
 * Find the Greatest Common Divisor (GCD) of two numbers.
 * 
 * Given two integers n1 and n2, return their GCD.
 * The GCD is the largest positive integer that divides both numbers.
 * 
 * Example:
 *   Input: n1 = 12, n2 = 18
 *   Output: 6
 *   Explanation: 6 is the largest number that divides both 12 and 18
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