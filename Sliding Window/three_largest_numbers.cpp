#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
class Solution {
public:    vector<int> findThreeLargestNumbers(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
            if (pq.size() > 3) {
                pq.pop();
            }
        }
        vector<int> ans(3);
        for (int i = 2; i >= 0; i--) {
            ans[i] = pq.top();
            pq.pop();
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int> nums = {-10, -3, -5, -6, -20};
    vector<int> ans = s.findThreeLargestNumbers(nums);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}