// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> vec;
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.pop_back();
//     cout << "Size of vector: " << vec.size() << endl;
//     cout << "capacity of vector: " << vec.capacity() << endl;
//     return 0;
// }


#include<iostream>
using namespace std;

void Sum(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        int first = arr[i];
        for(int j = i + 1; j < size; j++) {
            int second = arr[j];
            if(first + second == target) {
                cout << "Pair found at indices " << i << " and " << j << endl;
                return;
            }
        }
    }
    cout << "No pair found" << endl;
}

int main() {
    int arr[4] = {2, 1, 3, -1};
    int target = 0;

    Sum(arr, 4, target);
    return 0;
}
