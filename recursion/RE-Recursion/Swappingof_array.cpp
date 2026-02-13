#include<iostream>
#include<vector>
using namespace std;
void Swap(vector<int> &arr,int i){
    int n = arr.size();
        if(i>=n/2) return;
        swap(arr[i],arr[n-i-1]);
        Swap(arr,i+1); 
    
    
}
int main(){
    vector<int> arr={1,3,2,5,4};
    Swap(arr,0);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
