// #include<iostream>
// using namespace std;
// int binarySearch(int arr1[],int size, int target){
//     int st=0,end=size-1;
//     while(st<=end){
//         int mid=(st+end)/2;
//         if(target>mid){
//             st=mid+1;
//         }
//         else if(target<mid){
//             end=mid-1;
//             }
//         else{
//             return mid;
//         }

//         return -1;
//     }
// }
// int main() {
//     int arr1[]={1,2,3,5,12};
//     int size = sizeof(arr1) / sizeof(arr1[0]); // Calculate array size
//     int target=12;
//     int result=binarySearch(arr1,target);
//     cout<<result<<endl;
//     return 0;
// }

// Rotateed sorted array

#include <iostream>
using namespace std;

int rotatedBinarySearch(int arr[], int size, int target) {
    int st = 0, end = size - 1;
    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[st] <= arr[mid]) {
            if (target >= arr[st] && target < arr[mid]) {
                end = mid - 1;  // Search in the left half
            } else {
                st = mid + 1;  // Search in the right half
            }
        }
        // Right half is sorted
        else {
            if (target > arr[mid] && target <= arr[end]) {
                st = mid + 1;  // Search in the right half
            } else {
                end = mid - 1;  // Search in the left half
            }
        }
    }
    return -1;  // Not found
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 6;
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int result = rotatedBinarySearch(arr, size, target);
    cout << result << endl;  // Output should be -1 since 3 is not in the array
    return 0;
}
