#include<iostream>
using namespace std;
void print1(int n){
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << n << " ";
        }
        cout<<endl;
    }
    
}
void print2(int n ){
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
void print3(int n){
    for (int i = 1; i<=n; i++){
        for (int j = 1; j <=n-i+1; j++){
            cout<<j<<" ";
            }
            cout<<endl;
    }
}
void print4(int n ){
    for (int i = 0; i<=n; i++){
        //space
        for (int j = 1; j <=n-i+1; j++){
            cout<<" ";
        }
        //star
        for (int j = 1; j <=2*i+1; j++){
            cout<<"*"; 
        }
        //space
        for (int j = 1; j <=n-i+1; j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void print5(int n){
     for (int i = 0; i < n; i++) {  // Loop for rows
        for (int j = 0; j < i; j++) {  // Printing leading spaces
            cout << " ";
        }
        
        for (int j = 0; j < (2 * (n - i) - 1); j++) {  // Printing stars
            cout << "*";
        }
        
        cout << endl;  // Move to next line
    }
    
}
int main(){
    int n;
    cin >> n;
    print5(n);
    return 0;
}