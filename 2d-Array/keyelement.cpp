#include<iostream>
using namespace std;

int linerSearch(int mat[][3], int row, int cols, int key) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == key) {
                return mat[i][j]; // or return 1 to indicate found
            }
        }
    }
    return -1; // move this outside the outer loop
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int key = 89;
    int result = linerSearch(matrix, 3, 3, key);
    
    if(key==result){
         cout<<key<<" "<<"element is not found";
    }
    else{
        cout<<key<<" elemt found ";
    }

    return 0;
}
