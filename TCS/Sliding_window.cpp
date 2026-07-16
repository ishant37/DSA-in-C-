// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int k;
//     cout << "Enter k: ";
//     cin >> k;

//     int left = 0, right = 0, sum = 0;

//     while(right < n) {
//         sum += arr[right];

//         while(sum > k && left <= right) {
//             sum -= arr[left];
//             left++;
//         }

//         if(sum == k) {
//             cout << "Subarray found from index "
//                  << left + 1 << " to " << right + 1 << endl;
//             break; // Remove this if you want all such subarrays
//         }

//         right++;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    unordered_map<int, int> mp;
    mp[0] = -1;          // Prefix sum 0 before the array starts

    int prefix = 0;

    for (int i = 0; i < n; i++) {
        prefix += arr[i];

        if (mp.find(prefix - k) != mp.end()) {
            cout << "Subarray found from index "
                 << mp[prefix - k] + 1
                 << " to "
                 << i << endl;
            return 0;
        }

        // Store only the first occurrence
        if (mp.find(prefix) == mp.end())
            mp[prefix] = i;
    }

    cout << "No subarray found";
}