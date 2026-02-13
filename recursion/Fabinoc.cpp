#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    int last= fibo(n-1);
    int slast = fibo(n-2);
    return last+slast;
}
int main(){
    int n;
    cout<<"Enter the number of terms you want in the Fibonacci sequence: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout << fibo(i) << " "; // Print the Fibonacci series
    }
    cout << endl;
    return 0;
}