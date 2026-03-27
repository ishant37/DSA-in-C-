#include <iostream>
#include <algorithm> // Required for next_permutation
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3};
    
    // Sort first to ensure we start from the smallest permutation
    std::sort(nums.begin(), nums.end());

    do {
        for (int n : nums) std::cout << n << " ";
        std::cout << "\n";
    } while (std::next_permutation(nums.begin(), nums.end()));
    
    return 0;
}