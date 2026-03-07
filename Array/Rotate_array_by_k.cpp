// #include<iostream>
// #include<vector>
// using namespace std;
// class solution{
//     public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size();
//         for(int i=0;i<k;i++){
//             int temp=nums[n-1];
//             for(int j=n-1;j>0;j--){
//                 nums[j]=nums[j-1];
//             }
//             nums[0]=temp;
//         }

//     }
// };
// int main(){
//     vector<int> arr={1,2,3,4,5,6,7};
//     int k=3;
//     solution s;
//     s.rotate(arr,k);
//     cout<<"Array after rotating by k positions is : ";
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;

// }


//optimized solution
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int k=3;
    solution s;
    s.rotate(arr,k);
    cout<<"Array after rotating by k positions is : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}