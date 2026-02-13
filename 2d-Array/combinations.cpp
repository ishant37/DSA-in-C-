#include<iostream>
using namespace std;
int main() {
    int n;
    int k;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of combinations: ";
    cin >> k;
    int count = 0;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int l = j + 1; l < n; l++) {
                if (arr[i] + arr[j] + arr[l] == k) {
                    count++;
                    cout << "Combination: " << arr[i] << ", " << arr[j] << ", " << arr[l] << endl;
                }
            }
        }
    }
    return 0;
}