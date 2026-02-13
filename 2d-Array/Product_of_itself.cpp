#include<iostream>
using namespace std;
int productofitself(int arr[], int n){
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
        for(int j=i+1;j<n;j++){
                product*=arr[j];
                for(int k=j+1;k<n;k++){
                    product*=arr[k];
                }
                product*=arr[i];
                product*=arr[j];
                //  product*=arr[k];
        }
    }
    return product;
}
int main(){
    int  n=4;
    int arr[4]={1,2,3,4};
    cout<<"Product of itself is: "<<productofitself(arr,n)<<endl;
    return 0;
}