#include<iostream>
#include<vector>
using namespace std;
void reversearray(vector<int>& arr){
    int st=0,end=arr.size()-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
void originalarray(vector<int>& arr){
    cout<<"The original array is : ";
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={2,3,1,4,5};
    originalarray(arr);
    reversearray(arr);

    cout<<"The reverse array is : ";
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}