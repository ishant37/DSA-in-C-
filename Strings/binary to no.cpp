#include<iostream>
using namespace std;

void binaryToNo(string str){
    int result=0;
    for(int i=0;i<str.length();i++){
        result = result*2 + (str[i]-'0');
    }
    cout<<result<<endl;
}

void NotoBinary(int n){
    string result="";
    while(n>0){
        result = to_string(n%2) + result;
        n=n/2;
    }
    cout<<result<<endl;
}
void reverseNo(int n){
    int rev=0;
    while(n>0){
        rev=rev*10 + n%10;
        n=n/10;
    }
    cout<<rev<<endl;
}
int main(){
    int n =11;
    NotoBinary(n);
    reverseNo(n);
    binaryToNo(n);
    
    return 0;
}