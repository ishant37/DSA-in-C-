#include<iostream>
using namespace std;
int single(int arr[],int n){
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^=arr[i];
    }
    return result;
            
}
int main() {
    int arr[]={3,3,7,7,10,11,11};
    int n = sizeof(arr)/sizeof(arr[0]);
 cout<<"this is the single number: "<<single(arr,n);
    return 0;
}