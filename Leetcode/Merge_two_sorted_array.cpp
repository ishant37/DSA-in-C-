// #include <bits/stdc++.h>
// using namespace std;

// void swapIfGreater(long long arr1[], long long arr2[], int ind1, int ind2) {
//     if (arr1[ind1] > arr2[ind2]) {
//         swap(arr1[ind1], arr2[ind2]);
//     }
// }

// void merge(long long arr1[], long long arr2[], int n, int m) {
//     // len of the imaginary single array:
//     int len = n + m;

//     // Initial gap:
//     int gap = (len / 2) + (len % 2);

//     while (gap > 0) {
//         // Place 2 pointers:
//         int left = 0;
//         int right = left + gap;
//         while (right < len) {
//             // case 1: left in arr1[]
//             //and right in arr2[]:
//             if (left < n && right >= n) {
//                 swapIfGreater(arr1, arr2, left, right - n);
//             }
//             // case 2: both pointers in arr2[]:
//             else if (left >= n) {
//                 swapIfGreater(arr2, arr2, left - n, right - n);
//             }
//             // case 3: both pointers in arr1[]:
//             else {
//                 swapIfGreater(arr1, arr1, left, right);
//             }
//             left++, right++;
//         }
//         // break if iteration gap=1 is completed:
//         if (gap == 1) break;

//         // Otherwise, calculate new gap:
//         gap = (gap / 2) + (gap % 2);
//     }
// }

// int main()
// {
//     long long arr1[] = {1, 4, 8, 10};
//     long long arr2[] = {2, 3, 9};
//     int n = 4, m = 3;
//     merge(arr1, arr2, n, m);
//     cout << "The merged arrays are: " << "\n";
//     cout << "arr1[] = ";
//     for (int i = 0; i < n; i++) {
//         cout << arr1[i] << " ";
//     }
//     cout << "\narr2[] = ";
//     for (int i = 0; i < m; i++) {
//         cout << arr2[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm> // for sort
// using namespace std;

// void search_in_array(vector<int>& arr, int target) {
//     auto it = find(arr.begin(), arr.end(), target);
//     if (it != arr.end()) {
//         cout << "Element " << target << " found at index: " << distance(arr.begin(), it) << endl;
//     } else {
//         cout << "Element " << target << " not found in the array." << endl;
//     }
// }

// int main() {
//     // First unsorted array
//     int arr1[] = {5, 2, 9, 1, 7};
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);

//     // Second unsorted array
//     int arr2[] = {3, 8, 6, 4};
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);

//     // Create a vector to store merged array
//     vector<int> merged;

//     // Insert elements of first array
//     for (int i = 0; i < n1; i++) {
//         merged.push_back(arr1[i]);
//     }

//     // Insert elements of second array
//     for (int i = 0; i < n2; i++) {
//         merged.push_back(arr2[i]);
//     }

//     // Print merged array (unsorted)
//     sort(merged.begin(), merged.end());
//     cout << "Merged array (sorted): ";
//     for (int num : merged) {
//         cout << num << " ";
//     }

//     cout << endl;
//     // Search for an element in the merged array
//     int target;
//     cout << "Enter an element to search in the merged array: ";
//     cin >> target;
//     search_in_array(merged, target);
//     cout << "Enter an element to search in the first array: ";
//     cin >> target;
//     search_in_array(vector<int>(arr1, arr1 + n1), target);
//     cout << "Enter an element to search in the second array: ";

//     return 0;
// }


#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

double medianOf2(vector<int> &a, vector<int> &b) {
    int n = a.size(), m = b.size();
	
  	// if a[] has more elements, then call medianOf2 
  	// with reversed parameters
    if (n > m)
        return medianOf2(b, a);
  
    int lo = 0, hi = n;
    while (lo <= hi) {
        int mid1 = (lo + hi) / 2;
        int mid2 = (n + m + 1) / 2 - mid1;

        // find elements to the left and right of 
        // partition in a[]
        int l1 = (mid1 == 0 ? INT_MIN : a[mid1 - 1]);
        int r1 = (mid1 == n ? INT_MAX : a[mid1]);

        // find elements to the left and right of 
        // partition in b[]
        int l2 = (mid2 == 0 ? INT_MIN : b[mid2 - 1]);
        int r2 = (mid2 == m ? INT_MAX : b[mid2]);

        // if it is a valid partition
        if (l1 <= r2 && l2 <= r1) {
          
          	// if the total elements are even, then median is 
          	// the average of two middle elements
            if ((n + m) % 2 == 0)
                return (max(l1, l2) + min(r1, r2)) / 2.0;
          
          	// if the total elements are odd, then median is 
         	// the middle element
            else
                return max(l1, l2);
        }

        // check if we need to take lesser elements from a[]
        if (l1 > r2){
            hi = mid1 - 1;
        }
        // check if we need to take more elements from a[]
        else{
            lo = mid1 + 1;
        }
    }
    return 0;
}

int main() {
    
    vector<int> a = { -5, 3, 6, 12, 15 };
    vector<int> b = { -12, -10, -6, -3, 4, 10 };
    cout << medianOf2(a, b);
    
    return 0;
}