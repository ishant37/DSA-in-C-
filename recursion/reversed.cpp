#include <iostream>
using namespace std;
#include<vector>
vector<void> reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;    // Extract last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        n /= 10;               // Remove last digit
    }
    cout << "Reversed Number: " << reversed << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    reverseNumber(n);
    return 0;
}
