#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    return fact(n+1)+fact(n+2);
}
int main(){
    int n =10;
    cout<<fact(n);
    return 0;
}