#include<iostream>
#include<vector>
using namespace std;
void MergeSort(vector<int> &arr,)
int main() {
    vector<int> arr = {5, 2, 4, 1, 3, 8};
    MergeSort(arr, 0, arr.size() - 1);
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
