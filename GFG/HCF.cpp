#include <iostream>
using namespace std;

int gcd(int a, int b)
{
   int res=min(a,b);
   while(a%res==0 && b%res==0){
    res--;
   }
   return res;
}

int main()
{
    int a = 20, b = 28;
    cout << gcd(a, b);
    return 0;
}