#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for (int i = 2; i <= n; i++) {
            string t = s;
            reverse(t.begin(), t.end());
            for (char& c : t) {
                c = (c == '0') ? '1' : '0';
            }
            s = s + "1" + t;
        }
        return s[k - 1];
    }
};

int main() {
    Solution sol;
    int n = 7, k = 1;
    cout << sol.findKthBit(n, k) << endl; // Output: '0'
    return 0;
}