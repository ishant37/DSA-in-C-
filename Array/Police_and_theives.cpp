#include <iostream>
#include <vector>
#include <cstdlib>  // for abs()

int countThieves(const std::vector<char>& arr, int k) {
    int n = arr.size();
    int i = 0, j = 0;
    int count = 0;

    while (i < n && j < n) {
        // Find next police
        while (i < n && arr[i] != 'P') i++;

        // Find next thief
        while (j < n && arr[j] != 'T') j++;

        if (i < n && j < n && abs(i - j) <= k) {
            count++;
            i++;
            j++;
        } else if (j < i) {
            j++;
        } else {
            i++;
        }
    }

    return count;
}

int main() {
    std::vector<char> arr = {'T','T','P','P','T','P'};
    int k = 2;

    std::cout << countThieves(arr, k);
    return 0;
}
