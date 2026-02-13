#include<iostream>
using namespace std;
int Threesum(int arr[], int n) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
           int third=-(arr[i]+arr[j]);
           if(third==0){
            cout<<arr[i]<<" "<<arr[j]<<" "<<third;
           }
        }
    }
    cout << "No triplet found!" << endl;
    return 0; // No triplet found
}

int main() {
    int arr[] = {3, -3, 3, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Threesum(arr, n);
    return 0;
}