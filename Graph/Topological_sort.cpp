#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> topoSort(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> indegree(n, 0);
    queue<int> q;
    vector<int> ans;

    // Calculate indegree
    for (int i = 0; i < n; i++) {
        for (int next : adj[i]) {
            indegree[next]++;
        }
    }

    // Push all vertices with indegree 0
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }

    // Kahn's Algorithm
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (int next : adj[node]) {
            indegree[next]--;
            if (indegree[next] == 0)
                q.push(next);
        }
    }

    return ans;
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n);

    //  addEdge(adj, 0, 1);
    // addEdge(adj, 1, 2);
    // addEdge(adj, 2, 3);
    // addEdge(adj, 4, 5);
    // addEdge(adj, 5, 1);
    // addEdge(adj, 5, 2);
    // Input edges
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> res = topoSort(adj);

    if (res.size() != n) {
        cout << "Cycle exists. Topological Sort not possible.\n";
    } else {
        for (int x : res)
            cout << x << " ";
    }

    return 0;
}