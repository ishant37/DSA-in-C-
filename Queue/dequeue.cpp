#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    for(int i=0;i<d.size();i++){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;


}