#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>grid={{9,1,7},{8,9,2},{3,4,6}};
    vector<int>ans;
    int expSum=0,actualSum=0;
    int n=grid.size();
    unordered_set<int>s;
    int a,b;
    int m=grid[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            actualSum+=grid[i][j];
            if(s.count(grid[i][j])){
                a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);


            expSum=((n*n*(n*n+1))/2);
            b=expSum-actualSum;
            ans.push_back(b);
        }
    }

    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}