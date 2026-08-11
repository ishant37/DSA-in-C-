#include <bits/stdc++.h>
using namespace std;

void get(string s) {
    int n = s.length();

    for (int i = 0; i < n; i++) {
        string temp = "";

        for (int j = i; j < n; j++) {
            temp += s[j];
            cout << temp << endl;
        }
    }
}

int main() {
    string s = "abc";
    get(s);

    return 0;
}