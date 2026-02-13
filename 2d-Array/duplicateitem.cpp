#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int duplicateitem( vector<int>& arr) {
    unordered_set<int> seen;
    for (int num : arr) {
        if (seen.count(num)) {
            return num; // First duplicate found
        }
        seen.insert(num);
    }
    return -1; // No duplicates
}

int main() {
    vector<int> arr = {1, 4, 3, 4};
    cout << "Duplicate item is: " << duplicateitem(arr) << endl;
    return 0;
}
