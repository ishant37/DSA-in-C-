#include <bits/stdc++.h>
using namespace std;

struct State {
    int a, b;
};

bool waterJug(int m, int n, int target) {
    queue<State> q;
    unordered_set<pair<int, int>> visited;
    q.push({0, 0});
    visited.insert({0, 0});

    while (!q.empty()) {
        State curr = q.front();
        q.pop();

        int a = curr.a;
        int b = curr.b;

     
        if (a == target || b == target)
            return true;


        vector<State> nextStates = {
            {m, b},                
            {a, n},                
            {0, b},                 
            {a, 0},                 
            {a - min(a, n - b), b + min(a, n - b)}, 
            {a + min(b, m - a), b - min(b, m - a)}  
        };

        for (auto &next : nextStates) {
            if (visited.find({next.a, next.b}) == visited.end()) {
                visited.insert({next.a, next.b});
                q.push(next);
            }
        }
    }
    return false;
}

int main() {
    int m = 4, n = 8 , target = 2;

    if (waterJug(m, n, target))
        cout << "Target is reachable\n";
    else
        cout << "Target is NOT reachable\n";

    return 0;
}
