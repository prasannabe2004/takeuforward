#include <algorithm>
#include <cstdint>
#include <iostream>
#include <tuple>

using namespace std;

void dec2bin(uint32_t n) {
    for (int i = 15; i >= 0; i--) {
        if ((n >> i) & 1) {
            cout << "1";
        } else {
            cout << "0";
        }
    }
}

int main() {
    uint32_t num1 = 0b0011101111111111;
    dec2bin(num1);
    return 0;
}
