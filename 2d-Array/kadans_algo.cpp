#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {-2, -1, 3, 4, 5};
    int maxSum = INT_MIN;

   for(int st=0;st<n;st++){
    int currsum=0;
    for(int i=st;i<n;i++){
        currsum+=arr[i];
        if(currsum>maxSum){
            maxSum=currsum;
        }
    }
   }

    cout << "Max subarray sum is: " << maxSum << endl;
//for index



    return 0;
}
