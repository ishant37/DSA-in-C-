#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={2,2,1,1,1,2,2,3,3,3,3,2};
    int n=arr.size();
    int major=0;
    int res=0;
    for(int n:arr){
        //n/2
        if(res==0){
            major=n;
        }
        if(n==major){
            res++;
        }
        else{
            res--;
        }
        
    }
    cout<<major;
    return 0;
}