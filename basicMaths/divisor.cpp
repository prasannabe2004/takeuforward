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
    vector<int> divisors(int n)
    {
        vector<int> results;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                results.push_back(i);
            }
        }
        return results;
    }
};

int main()
{
    Solution s;
    vector<int> r;
    r = s.divisors(6);
    for (auto v : r)
    {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}