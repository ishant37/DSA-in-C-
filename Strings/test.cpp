#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abc";
    int sum=0;
    for(int i=0;i<s.size();i++){
        int product=abs(s[i]-'z')+1*(s[i]-'a'+1);
        sum+=product;
        cout<<product<<" ";
    }
    cout<<sum<<endl;

}