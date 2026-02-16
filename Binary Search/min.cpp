#include<iostream>
#include<vector>
using namespace std;
int smaller(vector<int>arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[high]){
            low=mid+1;
        }else{
            high=mid;
        }
    }
    return arr[low];
}
int main(){
    vector<int>arr={2,3,4,1};
    cout<<smaller(arr)<<endl;
    return 0;
}