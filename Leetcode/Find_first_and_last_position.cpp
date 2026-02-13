#include <iostream>
#include <vector>
using namespace std;

vector<int> res(vector<int> &arr, int target) {
    int first = -1, last = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    return {first, last};
    
}

int main() {
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = res(arr, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
