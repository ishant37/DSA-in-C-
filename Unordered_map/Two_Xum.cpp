// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr={2,3,4,6,7};
//     int n=arr.size()
//     int target=10;
//     for(int i=0;i<n;i++){
//         int first=arr[i];
//         int compilement=target-first  ;
//         if(arr.find()!=arr.end()){
//             cout<<"Pairs found"<< compilement<<" at "<<i;

//         }     
//         return -1; 
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> TwoSum(vector<int>& arr,int &n,int tar){
    vector<int>result;
    for(int i=0;i<n;i++){
        unordered_map<int,int> m;
        int compliment=tar-arr[i];
        if(m.find(compliment)!=m.end()){
            result.push_back(arr[i]);
            result.push_back(compliment);
            return result;
        }
        m[arr[i]]=i;
    }
}
int main(){
    vector<int>arr={2,3,4,6,7};
    int n=arr.size();
    int tar=10;
    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> result=TwoSum(arr,n,tar);
    if (!result.empty()) {
        cout << "Two elements found: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No elements found!" << endl;
    }
  
    return 0;
}