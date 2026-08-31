#include<bits/stdc++.h>
using namespace std;
 int binarySearch(vector<int>&arr,int size, int target){
    int st=0,end=size-1;
   while(st<=end){
    int mid=st+(end-st)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[st]<=arr[mid]){
        if(target>=arr[st] && target<arr[mid]){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    else{
        if(target>arr[mid] && target<=arr[end]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
   }
    return -1;
}
int main(){
    vector<int>arr={2,1,4,5,3};
    int n=arr.size();
    

    cout<<binarySearch(arr,n,1);
    return 0;
}