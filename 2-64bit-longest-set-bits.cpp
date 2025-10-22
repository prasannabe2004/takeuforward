#include <iostream>
#include <cstdint>
#include <string>
#include <algorithm>
#include <tuple>

/**
 * Finds the length and indices of the longest consecutive run of set bits
 * in a 128-bit number represented by two 64-bit unsigned integers.
 *
 * @param high The most significant 64 bits.
 * @param low The least significant 64 bits.
 * @return A tuple containing:
 *         - The length of the longest run (int).
 *         - The start index of the longest run (int).
 *         - The end index of the longest run (int).
 */
std::tuple<int, int, int> find_longest_consecutive_ones(uint64_t high, uint64_t low) {
    int max_len = 0;
    int max_start = -1;
    int max_end = -1;

    int current_len = 0;
    int current_start = -1;
    
    // Iterate through all 128 bits.
    for (int i = 0; i < 128; ++i) {
        bool is_bit_set;
        if (i < 64) {
            // Check a bit in the 'low' 64-bit integer
            is_bit_set = (low >> i) & 1;
        } else {
            // Check a bit in the 'high' 64-bit integer
            is_bit_set = (high >> (i - 64)) & 1;
        }

        if (is_bit_set) {
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
    
    // After the loop, check if the last run is the longest.
    if (current_len > max_len) {
        max_len = current_len;
        max_start = current_start;
        max_end = 127;
    }

    return {max_len, max_start, max_end};
}

int main() {
    // Example: A number with a run of 70 ones starting at index 10.
    uint64_t high_val = 0;
    uint64_t low_val = 0;

    // Set 64 ones in the high part (from index 64 to 127)
    high_val = -1; 
    
    // Set 6 ones in the low part (from index 10 to 15)
    low_val = ((uint64_t)1 << 6) - 1; // Creates a mask of 6 ones
    low_val = low_val << 10;
    
    // The number now has 64 ones (high) and 6 ones (low) which is not a single contiguous run.
    // Let's create a single long run.
    high_val = ((uint64_t)-1) >> (64 - 70 + 64); // This is complex, let's use a simpler example
    high_val = 0;
    low_val = 0;
    
    // Create a 70-bit long run of ones.
    // This will span both high and low 64-bit integers.
    // The run will start at bit index 20 and end at bit index 89.
    uint64_t high_example = ((uint64_t)1 << (70 - 44)) - 1; // 44 bits in high
    uint64_t low_example = ((uint64_t)-1) << 20; // 44 bits in low
    
    std::cout << "Finding longest run of set bits in a 128-bit number (using two 64-bit integers)." << std::endl;
    auto [len, start, end] = find_longest_consecutive_ones(high_example, low_example);
    
    std::cout << "The longest run has a length of " << len << "." << std::endl;
    std::cout << "It starts at index " << start << " and ends at index " << end << "." << std::endl;

    return 0;
}
