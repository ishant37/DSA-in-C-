#include<bits/stdc++.h>
using namespace std;
int countPairs(vector<int>& arr,int k){
    unordered_map<int,int>freq;
    int ans=0;
    for(int x:arr){
        int rem=x%k;
        int need=(k-rem)%k;
        ans+=freq[need];
        freq[rem]++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<endl;
    cout<<countPairs(arr,k);
    return 0;
}