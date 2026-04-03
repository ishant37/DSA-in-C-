#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "cat matter cat and cat mat is lat";
    
    unordered_map<string, int> mp;
    string word = "";

    // Step 1: Traverse string and extract words
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            mp[word]++;
            word = "";
        } else {
            word += s[i];
        }
    }
    // Last word
    mp[word]++;

    // Step 2: Find max frequency word
    string ans = "";
    int maxFreq = 0;

    for (auto it : mp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            ans = it.first;
        }
    }

    cout << ans << endl;  // Output: cat
}