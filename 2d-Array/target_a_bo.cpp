#include<iostream>
using namespace std;
bool target(int mat[][3], int target) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {        
            if (mat[j][i]==target) {
                return true;  // Return true if target is found
            }          
        }
    }
    return false;  // Return false if not found
}
int main() {
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int target;
    cout << "Enter a number to search: ";
    cin >> target;
   

    return 0;
}
