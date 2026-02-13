#include <bits/stdc++.h>
using namespace std;

void finadswaps(vector<int>& A, int n, vector<int>& B, int m) {
    int sumA = accumulate(A.begin(), A.end(), 0);
    int sumB = accumulate(B.begin(), B.end(), 0);

    if ((sumA - sumB) % 2 != 0) {
        cout << "No possible pairs are found" << endl;
        return;
    }

    unordered_set<int> possibleset;
    for (int i = 0; i < n; i++) {
        possibleset.insert(A[i]);
    }

    bool found = false;
    for (int i = 0; i < m; i++) {
        int X = (sumA - sumB) / 2 + B[i];
        if (possibleset.find(X) != possibleset.end()) {
            cout << "Possible pair: (" << X << ", " << B[i] << ")" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No possible pairs are found" << endl;
    }
}

int main() {
    vector<int> A = {4, 1, 2, 1, 1, 2};
    vector<int> B = {3, 6, 3, 3};

    finadswaps(A, A.size(), B, B.size());
    return 0;
}
