#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                cout<<"The first no is "<<nums[i]<<" and second is "<<nums[j]<<endl;
            }
        }
    }
    return {};
}