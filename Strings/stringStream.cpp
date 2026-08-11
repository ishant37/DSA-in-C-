#include<bits/stdc++.h>
using namespace std;
string duplicate(string s){
    bool duplicate[256]={false};
    string ans="";
    for(auto i:s){
        if(!duplicate[i]){
            ans+=i;
            duplicate[i]=true;
        }
    }
    return ans;
}
int main(){
    string s;
    cin>>s;

    cout<<duplicate(s);

}