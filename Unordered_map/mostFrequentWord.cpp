#include <bits/stdc++.h>
using namespace std;

string mostFrequentWord(string arr[], int n) {
    unordered_map<string, pair<int,int>> mp;
    
    // Step 1: store freq and first occurrence
    for(int i = 0; i < n; i++) {
        if(mp.find(arr[i]) == mp.end()) {
            mp[arr[i]] = {1, i};  // first time
        } else {
            mp[arr[i]].first++;   // increase freq
        }
    }
    
    // Step 2: find answer
    string ans = "";
    int maxFreq = 0;
    int maxIndex = -1;

    for(auto it : mp) {
        string word = it.first;
        int freq = it.second.first;
        int firstIndex = it.second.second;

        if(freq > maxFreq) {
            maxFreq = freq;
            maxIndex = firstIndex;
            ans = word;
        }
        else if(freq == maxFreq) {
            if(firstIndex > maxIndex) {
                maxIndex = firstIndex;
                ans = word;
            }
        }
    }
    
    return ans;
}