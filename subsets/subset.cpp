#include<bits/stdc++.h>
using namespace std;
void solve(int index,vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp){
    ans.push_back(temp);
    for(int i=index;i<arr.size();i++){
        if(i!=index && arr[i]==arr[i-1])continue;
        temp.push_back(arr[i]);
        solve(i+1,arr,ans,temp);
        temp.pop_back();
    }
}
int main(){
    vector<int>arr={1,2,2};
    vector<vector<int>>ans;
    vector<int>temp;
    solve(0,arr,ans,temp);
    cout<<"[]";
    for(auto i:ans){
        for(auto j:i){
            cout<<"["<<j<<"] ";
        }
        cout<<endl;
    }

}