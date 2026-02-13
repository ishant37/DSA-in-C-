// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,4,6,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max = arr[0];
//     int min=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//             }
//             if(arr[i]<min)
//             {
//                 min = arr[i];
//                 }
//             }
//             cout<<"Maximum element is "<<max<<endl;
//             cout<<"Minimum element is "<<min;

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// pair<int, int> maxmin(vector<int> arr,int n ){
//     int max=arr[0];
//     int min=arr[0];
//     for(int i=1;i<n;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//         if(max<arr[i]){
//             max=arr[i];
//         }     
//     }
//     return {max,min};
// }
// int main(){
//     vector<int> arr;
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(1);
//     arr.push_back(9);
//     int n=arr.size();
//     pair<int, int> result = maxmin(arr, n);
//     cout<< "the max is"<<maxmin.first;
//     cout<< "the min is"<<maxmin.second;


// }
#include<iostream>
#include<vector>
using namespace std;

pair<int, int> maxmin(vector<int> arr, int n) {
    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal)
            maxVal = arr[i];
        if(arr[i] < minVal)
            minVal = arr[i];
    }
    return {maxVal, minVal};
}

int main() {
    vector<int> arr = {2, 3, 1, 9};
    int n = arr.size();

    pair<int, int> result = maxmin(arr, n);
    cout << "The max is: " << result.first << endl;
    cout << "The min is: " << result.second << endl;

    return 0;
}
