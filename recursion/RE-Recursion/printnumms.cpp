#include<iostream>
using namespace std;
void printNums(int n){
    if(n==-2){
        cout<<"-2"<<endl;
        return;
    }
    cout<<n<<" ";
    printNums(n-1);

}
int main() {
    printNums(5);
    return 0;
}