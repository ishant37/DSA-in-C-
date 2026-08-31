#include<bits/stdc++.h>
using namespace std;
string reversed(string& s){
    string ans="";
    int n=s.length();
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());

        if(word.length()>0){

            ans+=" "+word;
        }
    }
    return ans.substr(1);
}
int main(){
    string s="A man in the plane with ishant";
    cout<<reversed(s);
}