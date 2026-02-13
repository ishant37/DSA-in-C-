#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int> arr,int st,int end){
    if(arr.size()==0) return -1;
    while (st<=end)
    {
        int mid=st+(end-st)/2;
        bool leftok=(mid==0 || arr[mid]>arr[mid-1]);
        bool rightok=(mid==arr.size()-1 || arr[mid]>arr[mid+1]);
        if(leftok && rightok){
            return mid;
        }
         else if (mid < arr.size() - 1 && arr[mid + 1] > arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
    
}
int main(){
    vector<int> arr={1,2,5,9,4};
    int ans=peak(arr,0,arr.size()-1);
    cout<<"The peak element is : "<<arr[ans]<<endl<<" At index: "<<ans;
    return 0;
}