// class Solution {
// public:
//     string smallestPalindrome(string s) {
//         unordered_map<char,int>mp;
//         string mid="";
//         for(int i=0;i<s.size();i++)
//         {
//             mp[s[i]]++;
//         }
//         for(auto &x:mp)
//         { 
//             if(x.second%2==1)
//             {
//             mid=x.first;
//             }
//             x.second/=2;
//         }
//         string ans="";
//         for(char i='a';i<='z';i++)
//         {
//             while(mp[i]>0)
//             {
//               ans+=i;
//               mp[i]--;
//             }
//         }
//         string temp=ans;
//         reverse(temp.begin(),temp.end());
//         ans=ans+mid+temp;
//         return ans;
//     }
// };



vector<int> makePalindrome(vector<int>& nums) {
    map<int,int> mp;

    for (int x : nums)
        mp[x]++;

    vector<int> left, right;
    int mid = -1;

    int odd = 0;
    for (auto &p : mp) {
        if (p.second % 2) {
            odd++;
            mid = p.first;
        }

        for (int i = 0; i < p.second / 2; i++)
            left.push_back(p.first);
    }

    if (odd > 1)
        return {}; // impossible

    right = left;
    reverse(right.begin(), right.end());

    vector<int> ans = left;
    if (mid != -1)
        ans.push_back(mid);

    ans.insert(ans.end(), right.begin(), right.end());

    return ans;
}
