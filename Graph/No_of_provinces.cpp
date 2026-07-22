#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int findCircleNum(vector<vector<int>>& isConnected) {

//         int n = isConnected.size();
//         vector<bool> vis(n, false);
//         int provinces = 0;

//         for (int i = 0; i < n; i++) {

//             if (!vis[i]) {

//                 provinces++;

//                 queue<int> q;
//                 q.push(i);
//                 vis[i] = true;

//                 while (!q.empty()) {

//                     int node = q.front();
//                     q.pop();

//                     for (int j = 0; j < n; j++) {

//                         if (isConnected[node][j] == 1 && !vis[j]) {
//                             vis[j] = true;
//                             q.push(j);
//                         }
//                     }
//                 }
//             }
//         }

//         return provinces;
//     }
// };
class Solution {
public:
   void bfs(unordered_map<int,vector<int>>& adj, int u, vector<bool>& vis){
        queue<int>q;
        q.push(u);
        vis[u]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int neigh:adj[node]){
                if(!vis[neigh]){
                    bfs(adj,neigh,vis);
                    vis[neigh]=true;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>>adj;
        int n=isConnected.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<bool>vis(n+1,false);
        // vis[0]=true;
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(adj,i,vis);
                count++;
            }
        }
        return count;
    }
};
int main() {

    int n;
    cin >> n;

    vector<vector<int>> isConnected(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> isConnected[i][j];
        }
    }

    Solution obj;
    cout << obj.findCircleNum(isConnected);

    return 0;
}