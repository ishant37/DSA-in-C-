#include <iostream>
#include <algorithm>
using namespace std;

string decToBinary(int n) {
    
    string bit = "";
   while(n>0){
    int rem = n % 2;
    bit.push_back('0' + rem);
    n /= 2;
   }
   reverse(bit.begin(),bit.end());
   return bit;
}
 

int main() {
    int n = 121;
    cout << decToBinary(n);
    return 0;
}