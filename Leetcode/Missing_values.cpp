#include<vector>
#include<iostream>
using namespace std;
int Expesum(int arr[],int n){
    int actual_sum=0;
    int expsum=n*(n+1)/2;
    for(int i=0;i<n;i++){
        actual_sum+=arr[i];
    }
    int b=expsum-actual_sum;
    return b;
}
int main(){
    vector<int> arr={1,0,3};
    int n=arr.size();
    cout<<"the sum is: "<<Expesum(arr.data(),n);
    return 0;
}