#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="aba";
    int i=0;
    int j=s.length();
    while(i<=j){
        if(s[i]!=s[j]){
            cout<<"false";
        }
        else{
            cout<<"true";
        }
        i++,j--;
    }
    
}