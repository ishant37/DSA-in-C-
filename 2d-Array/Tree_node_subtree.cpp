#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 5, 2, 2, 3, 3, 1};
    std::vector<std::vector<int>> pairs;

    // Loop starts at index 1 and steps by 2
    for (size_t i = 1; i + 1 < arr.size(); i += 2) {
        pairs.push_back({arr[i], arr[i + 1]});
    }

    // Example action: Print the pairs and their sum
    std::cout << "Pairs and their sums:\n";
    for (const auto& pair : pairs) {
        int x = pair[0];
        int y = pair[1];
        std::cout << "[" << x << ", " << y << "] -> Sum: " << (x + y) << "\n";
    }

    return 0;
}
