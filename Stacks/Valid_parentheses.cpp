#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
int main(){
    vector<string> parentheses = {"()", "()[]{}", "(]", "([)]", "{[]}"};
    for(string s : parentheses){
        stack<char> st;
        unordered_map<char, char> mapping = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        bool isValid = true;
        for(char ch : s){
            if(mapping.find(ch) != mapping.end()){
                if(st.empty() || st.top() != mapping[ch]){
                    isValid = false;
                    break;
                } else {
                    st.pop();
                }
            } else {
                st.push(ch);
            }
        }
        if(!st.empty()) isValid = false;
        cout << s << " : " << (isValid ? "Valid" : "Invalid") << endl;
    }
}