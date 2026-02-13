#include<iostream>
using namespace std;
// Function to find the single number in an array where every other number appears twice
// using XOR operation
int singleNumber(int nums[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= nums[i]; // XOR operation
    }
    return result;  
}
// Main function to test the singleNumber function
int main(){
    int arr[5]={1,1,2,2,3};
    int n=5;
    cout<<"Single number is: "<<singleNumber(arr,n)<<endl; // Output: 3

    return 0;
}