#include<bits/stdc++.h>
using namespace std;
void bfs(int start,vector<vector<int>>& adj,int n){
    vector<bool>vis(n+1,false);
    queue<int>q;
    vis[start]=true;
    q.push(start);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbour:adj[node]){
            if(!vis[neighbour]){
                vis[neighbour]=true;
                q.push(neighbour);
            }
    }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1,adj,n);
}