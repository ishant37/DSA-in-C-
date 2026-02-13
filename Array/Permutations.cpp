#include<vector>
#include<iostream>
using namespace std;

// Recursive function to find all possible permutations. 
void permutations(vector<vector<int>>& res, vector<int> arr, int idx) {
    if (idx == arr.size()) {
        res.push_back(arr);
        return;
    }

    // Permutations made by swapping each element
    // starting from index `idx`
    for (int i = idx; i < arr.size(); i++) {
      
        // Swapping
        swap(arr[idx], arr[i]);

        // Recursive call to create permutations 
        // for the next element
        permutations(res, arr, idx + 1);

        // Backtracking
        swap(arr[idx], arr[i]);
    }
}

// Function to get the permutations
vector<vector<int>> permuteDist(vector<int>& arr) {
    vector<vector<int>> res;
    permutations(res, arr, 0);
    return res;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> res = permuteDist(arr);
    for (auto x : res) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}