#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n==1)return 1;
    if(n==2)return 2;
    if(n==3)return 2;
    return solve(n-1)+solve(n-2);
}
int main(){
    int n=9;
    cout<<solve(n);
    return 0;
}