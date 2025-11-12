#include <algorithm>
#include <cstdint>
#include <iostream>
#include <set>
#include <tuple>

using namespace std;

int main() {
    set<int> s = {50, 10, 20, 30, 20};
    for (int x : s) {
        cout << x << " ";
    }
    if (s.find(10) != s.end()) {
        cout << "found";
    }
    return 0;
}
