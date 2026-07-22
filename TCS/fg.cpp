#include <iostream>
#include <sstream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    unordered_set<int> st;
    int x;

    while (ss >> x) {
        st.insert(x);
    }

    int mex = 0;
    while (st.count(mex)) {
        mex++;
    }

    cout << mex << endl;

    return 0;
}