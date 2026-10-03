#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int balance;

public:
    void getBalc(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    Solution s1;

    s1.getBalc(1000);

    cout << s1.getBalance() << endl;

    return 0;
}
