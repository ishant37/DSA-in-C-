#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int> nums, int n) {
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 1; j < n; j++) {
            if(nums[i] == nums[j]) count++;
        }
        if(count == 1) return n; // Found the number that appears once
    }
    return -1; // If not found
}

int main() {
    vector<int> nums = {2, 1, 2};
    int n = nums.size();
    cout << "Single number is: " << singleNumber(nums, n) << endl;
    return 0;
}
