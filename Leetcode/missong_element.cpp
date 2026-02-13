#include<iostream>
#include<vector>
using namespace std;
// int missingElement(vector<int>&arr,int n){
//     for(int i = 0; i < n; i++){
//         if(arr[i] != i + 1){
//             return i + 1;
//         }
//     }
//     return n + 1;
// }

int missingElement(vector<int>& arr,int n){
    // n=*max_element(arr.begin(),arr.end());
    int expesum=(n*(n+1))/2;
    int actualsum=0;
    for(int i = 0; i < arr.size(); i++){
        actualsum+=arr[i];
    }
    // int b=;
    return expesum-actualsum;
}
int main(){
    vector<int>arr ={1, 2, 3, 4, 6, 7, 8};
    int n = arr.size();
   int ans= missingElement(arr,8);
    cout << "The missing element is: " << ans << endl;
    return 0;
}