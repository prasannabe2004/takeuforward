#include <iostream>
#include <utility> // for std::pair
#include <algorithm> // for std::max

// Use unsigned __int128 for a 128-bit integer.
typedef unsigned __int128 u128;

/**
 * Finds the length and indices of the longest consecutive run of set bits.
 *
 * @param n The 128-bit unsigned integer to analyze.
 * @return A tuple containing:
 *         - The length of the longest run (int).
 *         - The start index of the longest run (int), 0-indexed from the right.
 *         - The end index of the longest run (int), 0-indexed from the right.
 */
std::tuple<int, int, int> longest_consecutive_ones_with_indices(u128 n) {
    int max_len = 0;
    int max_start = -1;
    int max_end = -1;

    int current_len = 0;
    int current_start = -1;

    // Iterate through all 128 bits, from least significant to most significant.
    for (int i = 0; i < 128; ++i) {
        if ((n >> i) & 1) { // Check the i-th bit
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
        max_end = 127; // The last bit is index 127
    }

    return {max_len, max_start, max_end};
}

// Helper function to print __int128 for demonstration
std::ostream& operator<<(std::ostream& os, u128 val) {
    if (val == 0) return os << "0";
    std::string s = "";
    while (val > 0) {
        s += (val % 2 == 0 ? '0' : '1');
        val /= 2;
    }
    std::reverse(s.begin(), s.end());
    os << s;
    return os;
}

int main() {
    // Example 1: Longest run in the middle
    u128 val1 = (u128(1) << 70) | (u128(0b11111) << 20) | (u128(0b1111) << 10);
    auto [len1, start1, end1] = longest_consecutive_ones_with_indices(val1);
    std::cout << "Number: " << val1 << std::endl;
    std::cout << "Longest run: Length " << len1 << ", from index " << start1 << " to " << end1 << std::endl << std::endl;
    // The number 0b11111 shifted 20 places starts at index 20 and ends at 24.
    // Length is 5.
/*
    // Example 2: Longest run at the start
    u128 val2 = (u128(1) << 60) | (u128(1) << 61) | (u128(1) << 62) | (u128(1) << 63) | (u128(0b1111) << 10);
    auto [len2, start2, end2] = longest_consecutive_ones_with_indices(val2);
    std::cout << "Number: " << val2 << std::endl;
    std::cout << "Longest run: Length " << len2 << ", from index " << start2 << " to " << end2 << std::endl << std::endl;
    // The run of 1s from index 60 to 63 has length 4, which is longer than the run at index 10-13.
    
    // Example 3: Longest run at the end
    u128 val3 = u128(-1) >> 64; // Sets all bits in the lower 64 bits to 1
    auto [len3, start3, end3] = longest_consecutive_ones_with_indices(val3);
    std::cout << "Number: " << val3 << std::endl;
    std::cout << "Longest run: Length " << len3 << ", from index " << start3 << " to " << end3 << std::endl << std::endl;
    // This is the number with all lower 64 bits set. Length is 64, indices 0-63.
*/
    return 0;
}
