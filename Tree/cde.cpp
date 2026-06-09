#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 5};

    map<int, int> ans;

    for (int num : arr) {
        ans[num]++;
    }

    vector<int> as;

    for (auto it : ans) {
        as.push_back(it.first);
    }

    for (int i : as) {
        cout << i << " ";
    }

    return 0;
}