#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    string s1="ab";
    int count=0;
    string s2="eidbaooo";
    unordered_map<char,int>mp;
    for(auto it:s1){
        mp[it]++;
    }
    int l=0,r=s1.size();
    while(r<s2.size()){
            count = 0;
            unordered_map<char,int> temp=mp;
            for(int i=l;i<=r;i++){
                if(temp.find(s2[i])==temp.end()){
                    break;
                }
                if(temp[s2[i]]==0)break;
                count++;
                temp[s2[i]]--;
            }
         if(count==s1.size())return true;
        l++;
        r++;
    }
    if(count==s1.size())return true;
    return false;
}
