#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> ThreeSum(int arr[], int n, int target) {
    vector<int> result;
    for (int i = 0; i < n - 2; i++) {
        unordered_map<int, int> m;
        for (int j = i + 1; j < n; j++) {
            int complement = target - arr[i] - arr[j];
            if (m.find(complement) != m.end()) {
                result.push_back(arr[i]);
                result.push_back(arr[j]);
                result.push_back(complement);
                return result; // Return early if a valid triplet is found
            }
            m[arr[j]] = i;
        }

    }
    return result; // Return an empty vector if no triplet is found
}

int main() {
    int arr[] = {2, 3, 1, 8};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "The array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"Target is : "<<target<<endl; 
    vector<int> result = ThreeSum(arr, n, target);
    if (!result.empty()) {
        cout << "Triplet found: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No triplet found!" << endl;
    }

    return 0;
}
