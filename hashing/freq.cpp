#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> freq(vector<int>& arr){
    unordered_map<int,int>freq;
    vector<int> ans;
    for(int i =0;i<arr.size();i++){
        if(freq.find(i)!=freq.end()){
            ans.push_back(arr[i]);
        }
    }
}
int main(){
    vector<int>arr={1,2,1,1,3,2};
    cout<<freq(arr);
    return 0;
}