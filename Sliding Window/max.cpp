// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector<int> arr={1,3,-1,-3,5,3,6,7};
//     int k=3;
//     int n=arr.size();
//     vector<int> result;
//     for(int i=0;i<=n-k;i++){
//         int mx=arr[i];
//         for(int j=i;j<i+k;j++){
//             if(arr[j]>mx){
//                 mx=arr[j];
//             }
//         }
//         result.push_back(mx);
//     }
//     cout<<"Maximums in each sliding window are: ";
//     for(int i=0;i<result.size();i++){
//         cout<<result[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
void maxsumsubarray(vector<int>& arr,int k,vector<int>& result){
    int n=arr.size();
    for(int i=0;i<n-k;i++){
        int mx=arr[i];
        for(int j=i;j<n;j++){
            if(arr[j]>mx){
                mx=arr[j];
            }
        }
        result.push_back(mx);
    }
    return result;
}
void printarray(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={3,1,-1,-3,2,5};
    int k=3;
    vector<int>result=maxsumsubarray(arr,k);
    printarray(result);
    return;
}