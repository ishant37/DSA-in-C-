#include<iostream>
#include<vector>
using namespace std;
void cyclicSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
    }
}
void printArray(vector<int> arr){
    int n=arr.size();
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={2,4,1,5,3,6,8,7,9,10};
    cout<<"Original Array: ";
    printArray(arr);
    cyclicSort(arr);
    cout<<"Cyclic Sort: ";
    printArray(arr);

return 0;
}