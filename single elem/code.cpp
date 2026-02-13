#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr={3, 3, 7, 7, 10, 11, 11,12,10};
    int n = arr.size();
    int result=0;
    for(int i=0;i<n;i++){
        result^=arr[i];
    }
    cout<<"The single elemt is "<<result;

    return 0;
}
