#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr, int st, int end, int mid) {
    int i = st, j = mid + 1;
    int invecount = 0;
    vector<int> temp;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            invecount += (mid - i + 1);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted temp array back into arr
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }

    return invecount;
}

int countInversions(vector<int> &arr, int st, int end) {
    if (st >= end) return 0;

    int mid = st + (end - st) / 2;
    int leftInv = countInversions(arr, st, mid);
    int rightInv = countInversions(arr, mid + 1, end);
    int mergeInv = merge(arr, st, end, mid);

    return leftInv + rightInv + mergeInv;
}

int main() {
    vector<int> arr = {6, 4, 5, 2, 7,5};
    int ans = countInversions(arr, 0, arr.size() - 1);
    cout << "Inversion Count: " << ans << endl;
    return 0;
}
