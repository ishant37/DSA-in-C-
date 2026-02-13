#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<pair<int, int>> subarraySumIndices(vector<int>& nums, int k) {
    vector<pair<int, int>> result;
    int sum = 0;
    unordered_map<int, vector<int>> prefixSumIndices;
    prefixSumIndices[0].push_back(-1); // To handle subarrays starting from index 0

    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (prefixSumIndices.find(sum - k) != prefixSumIndices.end()) {
            for (int startIdx : prefixSumIndices[sum - k]) {
                result.push_back({startIdx + 1, i});
            }
        }
        prefixSumIndices[sum].push_back(i);
    }
    return result;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 5;
    auto indices = subarraySumIndices(nums, k);
    cout << "Subarrays with sum " << k << " are at indices:\n";
    for (auto& p : indices) {
        cout << "[" << p.first << ", " << p.second << "]\n";
    }
    return 0;
}