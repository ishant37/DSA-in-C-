#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int arr1[5];
    int arr2[5];

    // Initialize arr1 with 0
    memset(arr1, 0, sizeof(arr1));

    // Initialize arr2 with -1
    memset(arr2, -1, sizeof(arr2));

    cout << "arr1 elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\narr2 elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
