#include <vector>
#include <iostream>
using namespace std;

bool palin(vector<char> &let, int i) {
    int n = let.size();
    if (i >= n / 2) return true; // base case
    if (let[i] != let[n - i - 1]) return false; 
    return palin(let, i + 1); // recursive step
}

int main() {
    vector<char> let = {'m', 'a', 'm'};

    if (palin(let, 0)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    // Optional: print the original vector
    for (char val : let) {
        cout << val;
    }
    cout << endl;
}
