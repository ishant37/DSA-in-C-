#include<bits/stdc++.h>
using namespace std;

vector<int> solver(vector<int>&arr,vector<int>& ans){
    unordered_map<int,int>mp;
    for(int i:arr){
        mp[i]++;
    }
vector<int>ans;
    for(auto &it:mp){
        if(it.second>1){
            ans.push_back(it.first);
        }
    }
    return ans;
}
int main(){
    vector<int> arr={2,2};
    vector<int>ans;

    for(int i:ans){
        
    }
    
}