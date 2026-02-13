// #include<iostream>
// using namespace std;

// int find(int arr[][5], int m, int n, int target) {
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             if(arr[i][j] == target) {
//                 return arr[i][j];  // Element mil gaya
//             }
//         }
//     }
//     return -1;  // Nahin mila
// }

// int main() {
//      const int m = 5, n = 5;
//     int arr[m][n] = {
//         {1, 4, 7, 11, 15},
//         {2, 5, 8, 12, 19},
//         {3, 6, 9, 16, 22},
//         {10, 13, 14, 17, 24},
//         {18, 21, 23, 26, 30}
//     };
    
//     int target = 5;
//     int result = find(arr, m, n, target);

//     if(result != -1)
//         cout << "Element found: " << result << endl;
//     else
//         cout << "Element not found" << endl;

//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int find(int arr[][5],int target,int m,int n){
    int st=0;
}
int main(){
    const int m = 5, n = 5;
    int arr[m][n] = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
     int target = 5;
    int result = find(arr, m, n, target);

    if(result != -1)
        cout << "Element found: " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}