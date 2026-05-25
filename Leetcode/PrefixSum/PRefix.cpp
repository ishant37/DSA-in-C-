#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {3,2,4,5,1,6};

    int n = arr.size();

    // Prefix array
    vector<int> prefix(n);

    prefix[0] = arr[0];

    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    vector<pair<int,int>> queries = {
        {1,3},
        {2,5},
        {0,4}
    };

    for(auto q : queries){

        int L = q.first;
        int R = q.second;

        int ans;

        if(L == 0)
            ans = prefix[R];
        else
            ans = prefix[R] - prefix[L-1];

        cout << ans << endl;
    }
}