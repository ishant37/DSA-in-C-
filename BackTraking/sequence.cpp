#include <bits/stdc++.h>
using namespace std;

void generate(int k, int target, vector<int>& curr) {

    // If length becomes k
    if(curr.size() == k) {

        if(target == 0) {
            for(int x : curr)
                cout << x << " ";
            cout << endl;
        }

        return;
    }

    // Try every number from 1 to k
    for(int i = 1; i <= k; i++) {

        if(i <= target) {

            curr.push_back(i);

            generate(k, target - i, curr);

            curr.pop_back();      // Backtrack
        }
    }
}

int main() {

    int k = 3;
    int target = 5;

    vector<int> curr;

    generate(k, target, curr);
}