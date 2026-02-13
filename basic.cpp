// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1, 1, 2, 3, 5, 8, 13, 21}; // Fixed size array
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

//     int n;
//     cin >> n; // Input the index
//     F(n)=F(n-1)+F(n-2);
//     // Check if the index is valid
//     if (n >= 1 && n < size) {
//         cout << arr[n] << endl; // Output the corresponding number
//     } 

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void printname(string name){
    cout<<"Hey! "<<name<<endl;
}
int main() {
    string name;
    cin >> name;
    printname(name);
    return 0;
}