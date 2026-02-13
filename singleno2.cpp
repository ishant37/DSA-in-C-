#include<iostream>
using namespace std;
void findSingle(int arr[], int n) {
    int count[100] = {0}; // Assuming the numbers are in the range 0-99
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 0; i < 100; i++) {
        if (count[i] == 1) {
            cout << "The single number is: " << i << endl;
            return;
        }
    }
}
int main()
{
    int arr[10]={2,2,2,3,3,3,4,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    findSingle(arr, n); 
    // Output: The single number is: 4
}