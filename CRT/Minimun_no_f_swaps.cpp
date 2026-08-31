#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* int minSwaps(vector<int>& arr) {
    int ones = 0;

    // Count total number of 1s
    for (int x : arr) {
        if (x == 1)
            ones++;
    }

    // If there are no 1s or all elements are 1
    if (ones == 0 || ones == arr.size())
        return 0;

    // Find the maximum number of 1s in a window of size 'ones'
    int currentOnes = 0;

    for (int i = 0; i < ones; i++) {
        if (arr[i] == 1)
            currentOnes++;
    }

    int maxOnes = currentOnes;

    for (int i = ones; i < arr.size(); i++) {
        if (arr[i] == 1)
            currentOnes++;

        if (arr[i - ones] == 1)
            currentOnes--;

        maxOnes = max(maxOnes, currentOnes);
    }

    // Zeros inside the best window need to be swapped
    return ones - maxOnes;
}*/
int minSwaps(vector<int>&arr){
    // int i=0;
    int totalOnes=0;
    for(int x:arr){
        if(x==1){
            totalOnes++;
        }
    }
    if(totalOnes==0 || totalOnes==arr.size()){
        return 0;
    }

    int CurrOnes=0;
    for(int i=0;i<totalOnes;i++){
        if(arr[i]==1){
            CurrOnes++;
        }
    }
    int maxOnes=CurrOnes;
    for(int i=totalOnes;i<arr.size();i++){
        if(arr[i]==1){
            CurrOnes++;
        }
        if(arr[i-totalOnes]==1){
            CurrOnes--;
        }

        maxOnes=max(maxOnes,CurrOnes);
    }
    return totalOnes-maxOnes;

}
int main() {
    vector<int> arr = {1, 0, 1, 0, 1};

    cout << minSwaps(arr) << endl;

    return 0;
}