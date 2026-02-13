// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//   public:
//     bool isSafe(vector<string>& board,int row,int col,int n){
//         //horizontal
//         for(int j=0;j<n;j++){
//             if(board[row][j]=='Q'){
//                 return false;
//             }
//         }
//         //verical
//         for(int j=0;j<n;j++){
//             if(board[j][col]=='Q'){
//                 return false;
//             }
//         }
        
//         //leftdiagonal
//         for(int i=row,j=col;j>=0 && i>=0;i--,j--){
//             if(board[i][j]=='Q'){
//                 return false;
//             }
//         }
        
//         //rightdiagonal
//         for(int i=row,j=col;i>=0 && j<n;i--,j++){
//             if(board[i][j]=='Q'){
//                 return false;
//             }
//         }
//         return true;
//     }
        
//     void getqueen(vector<string>& board,int row,int n,vector<vector<int>>& ans){
//          if (row == n) {
//             int count=0;
//             vector<int> temp;
//             for(int i=0;i<n;i++){
//                 for(int j=0;j<n;j++){
//                     if(board[i][j]=='Q'){
//                         temp.push_back(j+1);
//                     }
//                 }
//             }
//             ans.push_back({temp});
//             return;
//         }
//         for(int j=0;j<n;j++){
//             if(isSafe(board,row,j,n)){
//                 board[row][j]='Q';
//                 getqueen(board,row+1,n,ans);
//                 board[row][j]='.';
//             }
            
//         }
//     }
//     vector<vector<int>> nQueen(int n) {
//         // code here
//         vector<vector<int>> ans;
//         vector<string> board(n,string(n,'.'));
//         getqueen(board,0,n,ans);
//         return ans;
//     }
// };


// int main() {
//     int n = 4; // Example for 4-Queens
//     Solution sol;
//     int count=0;
//     vector<vector<int>> result = sol.nQueen(n);
    
//     // for (const auto& solution : result) {
//     //     for (int col : solution) {
//     //         cout << col << "";
//     //     }
//     //     cout << endl;
//     // }
//     cout<<result.size()<<endl; // Output the number of solutions
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class solution{
  public:
      
};

int main(){

}