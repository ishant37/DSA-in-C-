#include<iostream>
#include <climits> 
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {9, 1, 2, 4, 0};
    int first = INT_MIN, second = INT_MIN, third=INT_MIN;
   for(int i=0;i<arr.size();i++){
    if(arr[i]>first){
        third=second;
        second=first;
        first=arr[i];
    }
    else if(arr[i]>second && arr[i]!=first){
        second=arr[i];
    }else if(arr[i]>third && arr[i]!=second){
        third=arr[i];
    }
   }
    cout << "The second largest element is: " << third << endl;
    return 0;
}