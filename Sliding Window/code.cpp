#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isVowel(char& ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    long long countOfSubstrings(string word, int k) {
        int n = word.length();
        unordered_map<char, int> mp;
        vector<int> nextCons(n);
        int lastIdx = n;
        for (int i = n - 1; i >= 0; i--) {
            nextCons[i] = lastIdx;
            if (!isVowel(word[i])) {
                lastIdx = i;
            }
        }
        int i = 0, j = 0;
        long long count = 0;
        int cons = 0;
        while (j < n) {
            if (isVowel(word[j])) {
                mp[word[j]]++;
            } else {
                cons++;
            }

            while (i < n && cons > k) {
                if (isVowel(word[i])) {
                    mp[word[i]]--;
                    if (mp[word[i]] == 0) {
                        mp.erase(word[i]);
                    }
                } else {
                    cons--;
                }
                i++;
            }
            while (i < n && cons == k && mp.size() == 5) {
                int idx = nextCons[j];
                count += idx - j;
                    char ch=word[i];
                if (isVowel(ch)) {
                    mp[word[i]]--;
                     if (mp[ch] == 0) {
                        mp.erase(word[i]);
                    }
                } else {
                    cons--;
                }
                i++;
            }
            j++;
        }
        return count;
    }
};

int main(){
    Solution s;
    string word = "ieaouqqieaouqq";
    int k = 1;
    cout << s.countOfSubstrings(word, k) << endl;
    return 0;
}