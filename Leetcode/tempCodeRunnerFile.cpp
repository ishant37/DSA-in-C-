#include<iostream>
// #include<vector>
// using namespace std;
// int numSpecial(vector<vector<int>>& mat) {
//     int m=mat.size();
//     int n=mat[0].size();
//     int count=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j]==1){
//                 bool flag=true;
//                 for(int k=0;k<m;k++){
//                     if(k!=i && mat[k][j]==1){
//                         flag=false;
//                         break;
//                     }
//                 }
//                 for(int k=0;k<n;k++){
//                     if(k!=j && mat[i][k]==1){
//                         flag=false;
//                         break;
//                     }
//                 }
//                 if(flag){
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
// }
// int main(){
//     vector<vector<int>> mat={{1,0,0},
//                             {0,1,0},
//                             {0,0,1}};
    
//     int ans=numSpecial(mat);
//     cout<<"Number of special positions in the binary matrix is : "<<ans;
//     cout<<endl;

//     return 0;
// }
