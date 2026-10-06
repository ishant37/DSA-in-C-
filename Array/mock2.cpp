#include<bits/stdc++.h>
using namespace std;
// You are given an integer array nums.
// You must perform one operation:
// Choose any one element from the array and remove it.
// After removing that element, divide the remaining array into two non-empty contiguous subarrays.
// The sum of both subarrays must be equal.
// Return true if it is possible to do this, otherwise return false.
// You may choose any element to remove and any valid partition point.

// Example 1

// Input:
// nums = [1, 2, 3, 4, 6]

// Output:
// true

// Explanation:
// Remove 4:
//
// [1, 2, 3, 6]
//
// Split it:
//
// [1, 2, 3] | [6]
//
// Both sums are 6.

// Example 2

// Input:
// nums = [2, 1, 1, 2]

// Output:
// true

// Explanation:
// Remove 1:
//
// [2, 1, 2]
//
// Split it:
//
// [2] | [1, 2]
//
// Both sums are 2.

bool solve(vector<int> &ar){
    int n=ar.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
    for(int i=0;i<n;i++){
        int new_sum=sum-ar[i];
        if(new_sum%2==0){
            int target=new_sum/2;
            int curr_sum=0;
            for(int j=0;j<n;j++){
                if(j==i) continue;
                curr_sum+=ar[j];
                if(curr_sum==target) return true;
                if(curr_sum>target) break;
            }
        }
    }
    return false;
}
int main(){
    vector<int> ar={1,2,3,4,34};
    if(solve(ar)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}