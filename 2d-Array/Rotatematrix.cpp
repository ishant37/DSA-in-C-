#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<vector<int>> ans(n, vector<int>(n, 0));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                ans[j][n - 1 - i] = mat[i][j];
            }
        }

        mat = ans; // assign rotated matrix back
    }
};

int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    sol.rotateMatrix(mat);

    // Print result
    for (auto row : mat) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
