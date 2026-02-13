#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int st = 0, end = arr.size() - 1;  // Use arr.size()

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] == target) {
                return mid;
            }

            // Check if the left half is sorted
            if (arr[st] <= arr[mid]) {
                if (target >= arr[st] && target < arr[mid]) {
                    end = mid - 1;  // Search in the left half
                } else {
                    st = mid + 1;  // Search in the right half
                }
            }
            // Right half is sorted
            else {
                if (target > arr[mid] && target <= arr[end]) {
                    st = mid + 1;  // Search in the right half
                } else {
                    end = mid - 1;  // Search in the left half
                }
            }
        }
        return -1;  // Not found
    }
};
int main(){
    Solution obj;
    int n=4;
    vector<int>arr={4,5,6,7,0,1,2};
    int target=0;
    int ans=obj.search(arr,target);
    cout<<"The index of the target element is : "<<ans;
    return 0;
}