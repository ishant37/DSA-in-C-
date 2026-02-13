#include<iostream>
#include<set>
using namespace std;
int singleNonDuplicate(set<int>& s) {
    int ans = 0;
    for (auto i : s) {
        ans ^= i;
    }
    return ans;
}
int main(){
    // Creating a set of integers
    set<int> s = {1,1,2,3,3,4,4,8,8};

    int result = singleNonDuplicate(s);
    cout << "The single non-duplicate element is: " << result << endl;

    return 0;
}