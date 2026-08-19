#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Returns the largest odd number substring from the given string
    string largeOddNum(string& s) {
        int j = -1;

        // Find the last odd digit in the string
        int i;
        for (i = s.length() - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 1) {
                j = i;
                break;
            }
        }

        // Skip leading zeroes up to the odd digit
        i = 0;
        while (i <= j && s[i] == '0') i++;

        // Return substring from first non-zero to odd digit
        return s.substr(i, j - i + 1);
    }
};

int main() {
    Solution solution;
    string num = "7204";
    string result = solution.largeOddNum(num);
    cout << "Largest odd number: " << result << endl;
    return 0;
}