#include<bits/stdc++.h>
using namespace std;
class solution{
  public:
  void ratinamaze(vector<vector<int>>&m,int n,vector<string>&ans,int i,int j,string path,vector<vector<int>>&vis){
      if(i<0 || j<0 || i>=n || j>=n || m[i][j]==0 || vis[i][j]==1){
          return;
      }
      if(i==n-1 && j==n-1){
          ans.push_back(path);
          return;
      }
      vis[i][j]=1;
      ratinamaze(m,n,ans,i+1,j,path+'D',vis);
      ratinamaze(m,n,ans,i-1,j,path+'U',vis);
      ratinamaze(m,n,ans,i,j+1,path+'R',vis);
      ratinamaze(m,n,ans,i,j-1,path+'L',vis);
      vis[i][j]=0;
  }
  
    vector<string> findPath(vector<vector<int>>&m, int n) {
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        if(m[0][0]==0){
            return ans;
        }
        ratinamaze(m,n,ans,0,0,"",vis);
        return ans;
    }


};
int main(){
    solution obj;
    int n;
    cin>>n;
    vector<vector<int>>m(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    vector<string>ans=obj.findPath(m,n);
    for(auto i:ans){
        cout<<"This is the path which is follows by the rat : "<<i<<" ";
    }
    return 0;

}