#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;

int main() {
    int rows = 3, cols = 4;
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 13, 8},
        {9, 10, 11, 12}
    };
    vector<int> arr;
    for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr.push_back(matrix[i][j]);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    // sort(arr.begin(), arr.end());
    reverse(arr.begin(),arr.end());
    cout << "Reversed: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
