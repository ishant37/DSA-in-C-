#include <iostream>
#include <vector>
using namespace std;

bool isSubsetSum(vector<int>& arr, int sum) {
    vector<bool> dp(sum + 1, false);

    dp[0] = true;

    for (int num : arr) {
        for (int j = sum; j >= num; j--) {
            dp[j] = dp[j] || dp[j - num];
        }
    }

    return dp[sum];
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum;
    cout << "Enter target sum: ";
    cin >> sum;

    if (isSubsetSum(arr, sum))
        cout << "Subset exists\n";
    else
        cout << "Subset does not exist\n";

    return 0;
}