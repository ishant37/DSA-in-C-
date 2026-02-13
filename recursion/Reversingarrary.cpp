// #include <iostream>
// using namespace std;

// void reverse(int arr[], int n) {
//     for (int i = 0; i < n / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }

//     // Print reversed array
//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n = 5;
//     int arr[] = {1, 2, 3, 4, 5};
//     reverse(arr, n);
//     return 0;
// }

#include <iostream>
using namespace std;

void reverse(int i,int arr[], int n) {
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);

    // Print reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    reverse(0,arr, n);
    return 0;
}

