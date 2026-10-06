#include <iostream>

using namespace std;

int binaryToDecimal(int binaryNum) {
    int decimal=0;
    int base=1;
    while(binaryNum>0){
        int lastDigit=binaryNum%10;
        decimal+=lastDigit*base;
        base*=2;
        binaryNum/=10;
    }
    return decimal;
}

int main() {
    int binaryNum = 1011; 
    
    cout << "Binary " << binaryNum << " in decimal is: " << binaryToDecimal(binaryNum) << endl;
    return 0;
}