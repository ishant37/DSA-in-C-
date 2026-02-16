#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool repeat(vector<int> arr){
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        if(mp.find(arr[i])!=mp.end()){
            return true;
        }else{
            mp[arr[i]]=1;
        }
    }
    return false;
}

int main(){
    vector<int>arr={2,3,4,7,4,5,6};
    int result=repeat(arr);
    if(result){
        cout<<"Duplicate element found"<<endl;
    }else{
        cout<<"No duplicate element found"<<endl;
    }
}