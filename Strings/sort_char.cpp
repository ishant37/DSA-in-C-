#include <bits/stdc++.h>
using namespace std;

// Function to insert element in sorted order
void insert(vector<char>& arr, int n) {
    // Base case: either empty or already in correct position
    if (n == 0 || arr[n-1] <= arr[n]) return;

    // Store current element
    char temp = arr[n];

    // Shift previous element forward
    arr[n] = arr[n-1];

    // Recur for remaining part
    insert(arr, n-1);

    // Place stored element
    arr[n-1] = temp;
}

// Recursive sort function
void recursiveSort(vector<char>& arr, int n) {
    // Base case
    if (n <= 1) return;

    // Sort first n-1 elements
    recursiveSort(arr, n-1);

    // Insert nth element at correct position
    insert(arr, n-1);
}

int main() {
    vector<char> arr = {'c','b','a','d','a','c'};

    recursiveSort(arr, arr.size());

    for (char c : arr) {
        cout << c << " ";
    }
}