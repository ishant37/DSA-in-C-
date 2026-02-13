#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long subarrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> prevGreater(n), nextGreater(n);
        vector<int> prevSmaller(n), nextSmaller(n);

        stack<int> st;

        // Previous Greater
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] <= nums[i])
                st.pop();
            prevGreater[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // Next Greater
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] < nums[i])
                st.pop();
            nextGreater[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // Previous Smaller
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] >= nums[i])
                st.pop();
            prevSmaller[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // Next Smaller
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] > nums[i])
                st.pop();
            nextSmaller[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        long long maxSum = 0, minSum = 0;

        for (int i = 0; i < n; i++) {
            long long maxCount = (long long)(i - prevGreater[i]) * (nextGreater[i] - i);
            long long minCount = (long long)(i - prevSmaller[i]) * (nextSmaller[i] - i);

            maxSum += maxCount * nums[i];
            minSum += minCount * nums[i];
        }

        return maxSum - minSum;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    cout << sol.subarrayRanges(nums) << endl; // Output: 4
    return 0;
}