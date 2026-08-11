// #include<bits/stdc++.h>
// using namespace std;

// int length(vector<int>&arr,int k){
//     int n=arr.size();
//     vector<int>prefix(n);
//     int l=0;
//     prefix[0]=arr[0];
//     for(int i=1;i<n;i++){
//         prefix[i]=prefix[i-1]+arr[i];
//     }
//     for(int i=0;i<prefix.size();i++){
//         if(prefix[i]==k){
//             return i+1;
//         }else{
//             return -1;
//         }
//     }
// }
// int main(){
//     vector<int>arr={1};
//     int k=1;

//     cout<<length(arr,k);

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int length(vector<int>&arr,int k){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k) return j+1;
            else return -1;
        }
    }
}
int main(){
    vector<int>arr={2,-1,2};
    int k=3;

    cout<<length(arr,k);

    return 0;
}