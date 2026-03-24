 #include <bits/stdc++.h>
using namespace std;

void printSubstrings(string s) {
    int n = s.length();

    for(int i = 0; i < n; i++) {
        string temp = "";
        for(int j = i; j < n; j++) {
            temp += s[j];   // build substring
            cout << temp << endl;
        }
    }
}

int main() {
    string s = "abc";
    printSubstrings(s);
}