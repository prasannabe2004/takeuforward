#include <bits/stdc++.h>

using namespace std;

/*
You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers.
Return the LCM of the two numbers.

The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.
*/

class Solution
{
public:
    int lcm(int a, int b)
    {
        int lar = max(a, b);
        int small = min(a, b);
        for (int i = lar;; i += lar)
        {
            if (i % small == 0)
                return i;
        }
    }
};

int main()
{
    Solution s;
    cout << s.lcm(4, 6) << endl;
    return 0;
}