#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {5, 2, 6, 1};
    vector<int> result(arr.size());
    stack<pair<int, int>> s;
    for(int i=0;i<arr.size();i++){
        int count = 0;
        while(!s.empty() && s.top().first > arr[i]){
            count += s.top().second;
            s.pop();
        }
        result[i] = count + 1;
        s.push({arr[i], result[i]});
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}