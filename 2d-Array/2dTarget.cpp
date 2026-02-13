#include<iostream>
using namespace std;

int Search(int mat[][3], int target) {
    for(int i = 0; i < mat[][3]; i++) {
        for(int j = 0; j < mat[][3]; j++) {
        if(mat[i][j] == target) {
            return mat[i][j];  // Return the index if target is found
        }
    }
}
    return -1;  // Return -1 if not found
}

int main() {
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int target;
    cout << "Enter a number to search: ";
    cin >> target;

    int index = Search(matrix, target);
    
    if(index != -1) {
        cout << "Target found at index: " << index;
    } else {
        cout << "Target not found";
    }
    cout<<endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}
