//  #include <bits/stdc++.h>
// using namespace std;

// void printSubstrings(string s) {
//     int n = s.length();

//     for(int i = 0; i < n; i++) {
//         string temp = "";
//         for(int j = i; j < n; j++) {
//             temp += s[j];   // build substring
//             cout << temp << endl;
//         }
//     }
// }

// int main() {
//     string s = "abc";
//     printSubstrings(s);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void printSubsequences(string s) {
//     int n = s.length();

//     for(int mask = 0; mask < (1 << n); mask++) {
//         string temp = "";
//         for(int i = 0; i < n; i++) { 
//             if(mask & (1 << i)) {
//                 temp += s[i];
//             }
//         }
//         cout << temp << endl;
//     }
// }

// int main() {
//     string s = "abc";
//     printSubsequences(s);
// }

#include<iostream> 
using namespace std;
// class BixBase

// {
//     public:
//         float x; 
// }; 
// class BixDerived : public BixBase
// {
//     public: 
//         char ch; 
//         void Process()
//         {
//             ch = (int)((x=12.0)/3.0);
//         }
//         void Display()
//         {
//             cout<< (int)ch;
//         } 
// }; 
// int main()
// {
//     class BixDerived  *objDev = new BixDerived;
//     objDev->Process();
//     objDev->Display();
//     return 0; 
// }
class Bix
{
    int x, y; 
    public:
    Bix(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void Display()
    {
        cout<< x << " " << y;
    }
};
int main()
{
    int x = 50;
    int &y = x ;
    Bix b(y, x);
    return 0; 
}