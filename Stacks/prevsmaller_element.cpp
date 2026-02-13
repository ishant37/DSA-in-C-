#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> arr = {100,80,60,70,60,75,85};
    vector<int> result(arr.size());
    stack<int> s;
    for(int i=0;i<arr.size();i++){
        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }
        result[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}