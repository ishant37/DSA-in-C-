#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int>&arr){
    int n=arr.size();
    for(int i=n-1;i>0;i--){
        int maxValue=0;
        for(int j=1;j<=i;j++){
            if(arr[maxValue]<arr[j]){
                maxValue=j;
            } 
        }
        swap(arr[maxValue],arr[i]);
    }
   
}
void printarray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={9,5,13,1,1,8,11,2,9,7};
    selectionsort(arr);
    printarray(arr);
    return 0;
}