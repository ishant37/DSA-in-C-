#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>arr,bool ans){
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]<arr[i+1]){
            return ans;
        }
    }
    return ans;
    
}
int main(){
    vector<int>arr={2,3,4,5};
    bool ans=false,
    int result=isSorted(arr,ans);
    cout<<result;
    return 0;

}
