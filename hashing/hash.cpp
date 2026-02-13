#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0}; // initialize with 0

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }

    return 0;
}
