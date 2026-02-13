#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>arr){
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]<arr[i+1]){
            return true;
        }
    }
    return false;
    
}
int main(){
    vector<int>arr={2,3,4,5};
    int result=isSorted(arr);
    return 0;

}
