#include<iostream>
#include<limits>
using namespace std;
int longestSubarrayWithKDistinct(int arr[], int n, int k) {
    int left = 0, right = 0;
    int maxLength = 0;
    int count[100000] = {0}; // Assuming elements are in the range [0, 99999]
    int distinctCount = 0;

    while (right < n) {
        if (count[arr[right]] == 0) {
            distinctCount++;
        }
        count[arr[right]]++;
        right++;

        while (distinctCount > k) {
            count[arr[left]]--;
            if (count[arr[left]] == 0) {
                distinctCount--;
            }
            left++;
        }

        maxLength = max(maxLength, right - left);
    }

    return maxLength;
}
int main() {
    int arr[] = {1, 2, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << "Length of longest subarray with " << k << " distinct elements: " 
         << longestSubarrayWithKDistinct(arr, n, k) << endl;
    return 0;
}