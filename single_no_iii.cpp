class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(const int n : nums) 
            if(s.count(n)) s.erase(n);
            else s.insert(n);
        return vector<int>(begin(s), end(s));
    }
};
