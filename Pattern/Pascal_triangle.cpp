// #include <iostream>
// using namespace std;

// int printcolumn(int n, int r) {
//     int ans = 1;
//     for (int i = 1; i <= r; i++) {
//         ans = ans * (n - i + 1) / i;
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter number of rows: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         // spaces
//         for (int j = 0; j < n - i; j++) {
//             cout << " ";
//         }
//         // values
//         for (int j = 0; j <= i; j++) {
//             cout << printcolumn(i, j) << " ";
//         }
//         cout << endl;
//     }
// }
// C++ program for Pascal’s Triangle
// in O(n^2) time and O(1) extra space
#include <bits/stdc++.h>
using namespace std;
// function for Pascal's Triangle
void printPascal(int n) {
    for (int row = 1; row <= n; row++) {
      
      	// nC0 = 1
        int c = 1; 
        for (int i = 1; i <= row; i++) {

            // The first value in a row is always 1
          	cout << c << " ";
            c = c * (row - i) / i;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printPascal(n);
    return 0;
}