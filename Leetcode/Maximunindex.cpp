#include<iostream>
#include<vector>
using namespace std;
int maximum(vector<int> &arr){
    if (arr.empty()) return -1;

    int maxIndex = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
int main(){
    vector<int> arr={1,2,3,2,7,8,9};
    int ans=maximum(arr);
    cout<<"The maximum no in this array is : "<<arr[ans]<<" At index : "<<ans;
    return 0;
}