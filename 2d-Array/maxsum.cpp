#include<iostream>
using namespace std;
int getMaxSum(int mat[][3],int row,int cols){
    int maxsum=0;
    for(int i=0;i<row;i++){
        int RowsumI=0;
        for(int j=0;j<cols;j++){
            RowsumI +=mat[i][j];
        }
        maxsum= max(maxsum,RowsumI);
    }
    return maxsum;
}
int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{12,13,14}};
    int row=4;
    int cols=3;
    cout<<getMaxSum(matrix,row,cols)<<" is the maximum sum of a row in the matrix."<<endl;
    cout<<"And the row and column is  "<<row<<" "<<cols;
    
    return 0;
}