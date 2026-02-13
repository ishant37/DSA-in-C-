#include<iostream>
#include<vector>
using namespace std;

int findMinElement(vector<int>& arr, int st, int ed) {
    while (st < ed) {
        int mid = st + (ed - st) / 2;
        if (arr[mid] > arr[ed]) {
            st = mid + 1;
        } else {
            ed = mid;
        }
    }
    return arr[st]; // This is the minimum element
}

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    int ans = findMinElement(arr, 0, arr.size() - 1);
    cout << "The minimum element is: " << ans << endl;
    return 0;
}
