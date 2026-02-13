#include<iostream>
using namespace std;
bool singleNonDuplicate(int arr[7],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==i){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    int n =7;
    int arr[7]={2,2,4,4,4,6,6};
    cout<<singleNonDuplicate(arr,n);
    
    return 0;
}