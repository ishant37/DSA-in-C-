#include <iostream>
#include <cctype>
using namespace std;

int countSpecial(string s) {
    int count = 0;

    for(char ch : s) {
        if(!isalpha(ch) && !isdigit(ch) && !isspace(ch)) {
            count++;
        }
    }

    return count;
}

int main() {
    string s = "Hello@123#World!";
    cout << countSpecial(s);
}
