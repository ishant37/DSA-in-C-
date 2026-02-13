// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> sieve(int n) {
    
//     // creation of boolean array
//     vector<bool> prime(n + 1, true);
//     for (int p = 2; p * p <= n; p++) {
//         if (prime[p] == true) {
            
//             // marking as false
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
    
//     vector<int> res;
//     for (int p = 2; p <= n; p++){
//         if (prime[p]){ 
//             res.push_back(p);
//         }
//     }
//     return res;
// }

// int main(){
//     int n = 35;
//     vector<int> res = sieve(n);
//     for(auto ele : res){
//         cout << ele << ' ';
//     }#include<iostream>
// #include <iostream>
// using namespace std;

// int powMod(int x, int n, int M) {
//     int res = 1;

//     // Loop until exponent becomes 0
//     while(n >= 1) {
        
//         // n is odd, multiply result by current x and take modulo
//         if(n & 1) {
//             res = (res * x) % M;
            
//             // Reduce exponent by 1 to make it even
//             n--;  
//         }
        
//         // n is even, square the base and halve the exponent
//         else {
//             x = (x * x) % M;
//             n /= 2;
//         }
//     }
//     return res;
// }

// int main() {
//     int x = 3, n = 2, M = 4;
//     cout<< powMod(x, n, M) <<endl;
    
// }
//     return 0;
// }

#include <iostream>
using namespace std;

bool isEven(int n)
{   
    // taking bitwise and of n with 1 
    if ((n & 1) == 0)
        return true;
    else
        return false;
}

int main()
{
    int n = 12;
    if (isEven(n) == true)
        cout << "true";
    else
        cout << "false";

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to compute floor of a / b
// int floorDiv(int a, int b) {
//     int q = a / b;

//     // adjust down if signs differ and not divisible
//     if ((a ^ b) < 0 && a % b != 0){
//         q--; 
//     }
//     return q;
// }

// // Function to compute ceil of a / b
// int ceilDiv(int a, int b) {
//     int q = a / b;

//     // adjust up if signs same and not divisible
//     if ((a ^ b) > 0 && a % b != 0){
//         q++; 
//     }
//     return q;
// }

// vector<int> divFloorCeil(int a, int b){

//     vector<int> res;

//     res.push_back(floorDiv(a,b));
//     res.push_back(ceilDiv(a,b));

//     return res;

// }

// int main() {

//     int a = -7, b = 2;

//     vector<int> res = divFloorCeil(a, b);
//     cout << res[0] << ' ' << res[1] << endl;

//     return 0;
// }