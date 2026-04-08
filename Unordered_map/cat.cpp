// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s = "cat matter cat and cat mat is lat";
    
//     unordered_map<string, int> mp;
//     string word = "";

//     // Step 1: Traverse string and extract words
//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == ' ') {
//             mp[word]++;
//             word = "";
//         } else {
//             word += s[i];
//         }
//     }
//     // Last word
//     mp[word]++;

//     // Step 2: Find max frequency word
//     string ans = "";
//     int maxFreq = 0;

//     for (auto it : mp) {
//         if (it.second > maxFreq) {
//             maxFreq = it.second;
//             ans = it.first;
//         }
//     }

//     cout << ans << endl;  // Output: cat
// }
#include <cctype>
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        // Step 1: convert to lowercase
        for(char &c : paragraph) c = tolower(c);

        // Step 2: banned words set
        unordered_set<string> ban(banned.begin(), banned.end());

        unordered_map<string,int> mp;
        string word = "";

        // Step 3: extract words
        for(char c : paragraph){
            if(isalpha(c)){
                word += c;
            } else {
                if(word != ""){
                    if(!ban.count(word)){
                        mp[word]++;
                    }
                    word = "";
                }
            }
        }

        // last word check
        if(word != "" && !ban.count(word)){
            mp[word]++;
        }

        // Step 4: find max frequency
        string ans = "";
        int maxFreq = 0;

        for(auto &it : mp){
            if(it.second > maxFreq){
                maxFreq = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};