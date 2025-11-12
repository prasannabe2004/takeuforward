#include <algorithm>
#include <cstdint>
#include <iostream>
#include <tuple>

/**
 * Finds the length and indices of the longest consecutive run of set bits
 * in a 32-bit unsigned integer.
 *
 * @param n The 32-bit unsigned integer to analyze.
 * @return A tuple containing:
 *         - The length of the longest run (int).
 *         - The start index of the longest run (int).
 *         - The end index of the longest run (int).
 */
std::tuple<int, int, int> find_longest_consecutive_ones_32(uint32_t n) {
    int max_len = 0;
    int max_start = -1;
    int max_end = -1;

    int current_len = 0;
    int current_start = -1;

    // Iterate through all 32 bits, from least significant to most significant.
    for (int i = 0; i < 32; ++i) {
        if ((n >> i) & 1) {  // Check the i-th bit
            if (current_len == 0) {
                current_start = i;
            }
            current_len++;
        } else {
            if (current_len > max_len) {
                max_len = current_len;
                max_start = current_start;
                max_end = i - 1;
            }
            current_len = 0;
            current_start = -1;
        }
    }

    // Check one last time after the loop in case the longest run is at the end.
    if (current_len > max_len) {
        max_len = current_len;
        max_start = current_start;
        max_end = 31;  // The last bit is index 31
    }

    return {max_len, max_start, max_end};
}

int main() {
    uint32_t num1 = 0b11101111111111;  // Example with runs of various lengths
    auto [len1, start1, end1] = find_longest_consecutive_ones_32(num1);
    std::cout << "Number: " << num1 << " (binary: " << std::bitset<32>(num1)
              << ")" << std::endl;
    std::cout << "Longest run: Length " << len1 << ", from index " << start1
              << " to " << end1 << std::endl
              << std::endl;
    /*
        uint32_t num2 = 0xFFFFFFFF; // All 1s
        auto [len2, start2, end2] = find_longest_consecutive_ones_32(num2);
        std::cout << "Number: " << num2 << " (binary: " << std::bitset<32>(num2)
       << ")" << std::endl; std::cout << "Longest run: Length " << len2 << ",
       from index " << start2 << " to " << end2 << std::endl << std::endl;

        uint32_t num3 = 0b11111110000000000000000000000001; // Long run at the
       top auto [len3, start3, end3] = find_longest_consecutive_ones_32(num3);
        std::cout << "Number: " << num3 << " (binary: " << std::bitset<32>(num3)
       << ")" << std::endl; std::cout << "Longest run: Length " << len3 << ",
       from index " << start3 << " to " << end3 << std::endl << std::endl;

        uint32_t num4 = 0b0; // No 1s
        auto [len4, start4, end4] = find_longest_consecutive_ones_32(num4);
        std::cout << "Number: " << num4 << " (binary: " << std::bitset<32>(num4)
       << ")" << std::endl; std::cout << "Longest run: Length " << len4 << ",
       from index " << start4 << " to " << end4 << std::endl << std::endl;
        */
    return 0;
}
