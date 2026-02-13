// #include<iostream>
// using namespace std;

// bool Search(int mat[4], int target) {
//     for(int i = 0; i < 4; i++) {
//         if(mat[i] == target) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int matrix[4] = {3, 0, 9, 4};
//     int target = 4;

//     if(Search(matrix, target)) {
//         cout << "Found";
//     } else {
//         cout << "Not Found";
//     }

//     return 0;
// }
#include<iostream>
using namespace std;

int Search(int mat[4], int target) {
    for(int i = 0; i < 4; i++) {
        if(mat[i] == target) {
            return mat[i];  // Return the index if target is found
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    int matrix[4] = {3, 0, 9, 4};
    int target ;
    cout<<"Enter the target: ";
    cin>>target;

    int index = Search(matrix, target);
    
    if(index != -1) {
        cout << "Target found at index: " << index;
    } else {
        cout << "Target not found";
    }

    return 0;
}
