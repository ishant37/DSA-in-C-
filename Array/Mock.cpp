#include<bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int>arr={1,1,1,2,2,3,3,4,5,5};
//     vector<int>ans;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]!=arr[i-1]){
//             ans.push_back(arr[i]);
//         }
//     }

//     for(int x:ans){
//         cout<<x<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr={1,1,2,2,3,3,3,4,4,5};
//     map<int,int>mp;
//     for(int i:arr){
//         mp[i]++;
//         if(mp[i]>1){
//             mp[i]=1;
//         }
//     }
//     for(int &i:arr)  
//         cout<<i<<" ";

//     return 0;
// }



int main() {
    vector<int> arr = {1,5,1,1,6,4};

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int x : arr) {
        pq.push(x);
    }

    vector<int> sorted;

    while(!pq.empty()) {
        sorted.push_back(pq.top());
        pq.pop();
    }

    // sorted = {1,1,1,4,5,6}

    vector<int> ans;
    int n = sorted.size();

    int mid = (n + 1) / 2;

    // smaller half
    for(int i = 0; i < mid; i++) {
        ans.push_back(sorted[i]);
        
        // larger half
        if(mid + i < n)
            ans.push_back(sorted[mid + i]);
    }

    for(int x : ans) {
        cout << x << " ";
    }
}

