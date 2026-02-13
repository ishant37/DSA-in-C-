#include <iostream>
#include <vector>
using namespace std;

int cntSubarrays(vector<int>& arr, int k) {
    
    int size = arr.size();
    
    // for maintaing the count of
    // subarrays whose sum equal to k
    int count = 0;
    for(int i = 0; i < size; i++){
        
        int currSum = 0;
        
        // subarray from i to each j -> arr[i....j]
        for(int j = i; j < size; j++){
            currSum += arr[j];
            
            // increment count if the currSum equal to k
            count += (currSum == k);
        }
    }
    
    return count;
}

int main() {
    vector<int> arr = {10, 2, -2, -20, 10};
    int k = -10;
    cout << cntSubarrays(arr, k);
    return 0;
}

// Time Complexity: O(n^2), where n is the number of elements in the array.
// Space Complexity: O(1)
// Output: 3
// Explanation: The subarrays with sum equal to -10 are:
// 1. [10, 2, -2, -20]
// 2. [2, -2, -20, 10]
// 3. [-20, 10]


//Dry and run// Input: arr = [10, 2, -2, -20, 10], k = -10
// 1. i = 0
//    - j = 0: currSum = 10 -> count = 0
//    - j = 1: currSum = 12 -> count = 0
//    - j = 2: currSum = 10 -> count = 0
//    - j = 3: currSum = -10 -> count = 1
//    - j = 4: currSum = 0 -> count = 1
// 2. i = 1
//    - j = 1: currSum = 2 -> count = 1
//    - j = 2: currSum = 0 -> count = 1
//    - j = 3: currSum = -20 -> count = 1
//    - j = 4: currSum = -10 -> count = 2
// 3. i = 2
//    - j = 2: currSum = -2 -> count = 2
//    - j = 3: currSum = -22 -> count = 2
//    - j = 4: currSum = -12 -> count = 2
// 4. i = 3
//    - j = 3: currSum = -20 -> count = 2
//    - j = 4: currSum = -10 -> count = 3
// 5. i = 4
//    - j = 4: currSum = 10 -> count = 3
// Final count = 3