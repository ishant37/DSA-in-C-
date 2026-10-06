#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

void printBinaryNumbers(int n) {
    // Total combinations is 2^n, which can be written as (1 << n)
    int totalCombinations = 1 << n;

    for (int i = 1; i < totalCombinations; i++) {
        string binaryStr = "";
        
        // Extract each bit from most significant to least significant
        for (int j = n - 1; j >= 0; j--) {
            // Check if the j-th bit is set (1) or not (0)
            if ((i >> j) & 1) {
                binaryStr += '1';
            } else {
                binaryStr += '0';
            }
        }
        
        sort(binaryStr.begin(), binaryStr.end());
        
        cout << binaryStr << endl;

    }
}

int main() {
    int n = 3;
    cout << "Binary numbers of length " << n << ":" << endl;
    printBinaryNumbers(n);
    
    return 0;
}