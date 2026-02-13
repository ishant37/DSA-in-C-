#include <iostream>
#include <climits>
#include <vector>
#include <unordered_set>
using namespace std;

int repeatingIndexReturn(vector<int>& arr) {
    int n = arr.size();
    unordered_set<int> st;
    int minIndex = INT_MAX;

    for (int i = n - 1; i >= 0; i--) {
        if (st.find(arr[i]) != st.end()) {
            minIndex = min(minIndex, i);
        }
        st.insert(arr[i]);
    }
    return minIndex == INT_MAX ? -1 : minIndex;
}

int main() {
    vector<int> arr = {1, 3,7, 9, 6, 8, 2, 4};
    int index = repeatingIndexReturn(arr);

    if (index == -1) {
        cout << "No repeating elements" << endl;
    } else {
        cout << "Repeating element is: " << arr[index]
             << " at index: " << index << endl;
    }
    return 0;
}
