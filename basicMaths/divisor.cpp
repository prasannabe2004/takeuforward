#include <bits/stdc++.h>

using namespace std;

/*
 * Find all divisors of a given number n.
 *
 * Given an integer n, return all positive integers that divide n evenly.
 * A divisor of n is a positive integer d such that n % d == 0.
 *
 * Example:
 *   Input: n = 6
 *   Output: [1, 2, 3, 6]
 *   Explanation: 6 is divisible by 1, 2, 3, and 6
 */

class Solution {
   public:
    vector<int> divisors(int n) {
        vector<int> results;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                results.push_back(i);
            }
        }
        return results;
    }
};

int main() {
    Solution s;
    vector<int> r;
    r = s.divisors(6);
    for (auto v : r) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}