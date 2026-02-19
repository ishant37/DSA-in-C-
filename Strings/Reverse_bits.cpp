#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverseBits(int n) {
    string bin = "";

    // Convert to binary
    while (n > 0) {
        bin += (n % 2) + '0';
        n /= 2;
    }

    // bin is already reversed
    int result = 0;
    for (char c : bin) {
        result = result * 2 + (c - '0');
    }

    return result;
}

int main() {
    int n = 11;
    cout << reverseBits(n) << endl;  // Output: 13
    return 0;
}


// #include <iostream>
// using namespace std;

// int reverseBits(int n) {
//     int rev = 0;

//     while (n > 0) {
//         rev = (rev << 1) | (n & 1);
//         n >>= 1;
//     }

//     return rev;
// }

// int main() {
//     int n = 11;
//     cout << reverseBits(n) << endl;  // Output: 13
//     return 0;
// }
