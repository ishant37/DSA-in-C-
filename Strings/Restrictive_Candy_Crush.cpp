#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string Reduced_String(int k, string s) {
        if (k == 1) return "";

        stack<pair<char,int>> st;

        for (char c : s) {
            if (!st.empty() && st.top().first == c) {
                st.top().second++;
                if (st.top().second == k) {
                    st.pop(); 
                }
            } else {
                st.push({c, 1});
            }
        }

        string res = "";
        while (!st.empty()) {
            res.append(st.top().second, st.top().first);
            st.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
int main() {
    Solution sol;
    int k;
    string s;
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Enter the string: ";
    cin >> s;

    string result = sol.Reduced_String(k, s);
    cout << "Reduced String: " << result << endl;

    return 0;
}

