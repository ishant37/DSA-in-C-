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

#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string s) {
    int n = s.length();

    for(int mask = 0; mask < (1 << n); mask++) {
        string temp = "";
        for(int i = 0; i < n; i++) { 
            if(mask & (1 << i)) {
                temp += s[i];
            }
        }
        cout << temp << endl;
    }
}

int main() {
    string s = "abc";
    printSubsequences(s);
}