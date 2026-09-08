// #include <iostream>
// #include <vector>
// #include<queue>
// using namespace std;

// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m =grid[0].size();
//         int ans = 0;
//         vector<vector<bool>> vis(n, vector<bool>(m, false));
//         queue<pair<pair<int, int>, int>> q;

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (grid[i][j] == 2) {
//                     q.push({{i, j}, 0});
//                     vis[i][j] = true;
//                 }
//             }
//         }
//         while (!q.empty()) {
//             int i = q.front().first.first;
//             int j = q.front().first.second;
//             int time = q.front().second;
//             q.pop();
//             ans = max(ans, time);
//             if (i - 1 >= 0 && !vis[i - 1][j] && grid[i - 1][j] == 1) {
//                 q.push({{i - 1, j}, time + 1});
//                 vis[i - 1][j] = true;
//             }
//             if (j + 1 < m && !vis[i][j + 1] && grid[i][j + 1] == 1) {
//                 q.push({{i, j + 1}, time + 1});
//                 vis[i][j + 1] = true;
//             }
//             if (i + 1 < n && !vis[i + 1][j] && grid[i + 1][j] == 1) {
//                 q.push({{i + 1, j}, time + 1});
//                 vis[i + 1][j] = true;
//             }
//             if (j - 1 >= 0 && !vis[i][j - 1] && grid[i][j - 1] == 1) {
//                 q.push({{i, j - 1}, time + 1});
//                 vis[i][j - 1] = true;
//             }
//         }
//         //remaining
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (grid[i][j] == 1 && !vis[i][j]) {
//                     return -1;
//                 }
//             }
//         }
//         return ans;
//     }
// };

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> grid(n, vector<int>(m));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> grid[i][j];
//         }
//     }

//     Solution obj;
//     cout << obj.orangesRotting(grid);

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        queue<pair<int,int>> q;
        int fresh = 0, time = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) q.push({i,j});
                else if(grid[i][j] == 1) fresh++;
            }
        }

        int d[5] = {-1, 0, 1, 0, -1};

        while(!q.empty() && fresh) {
            int sz = q.size();
            time++;

            while(sz--) {
                auto [r,c] = q.front();
                q.pop();

                for(int k = 0; k < 4; k++) {
                    int nr = r + d[k];
                    int nc = c + d[k+1];

                    if(isSafe(nr, nc, n, m) && grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        fresh--;
                        q.push({nr,nc});
                    }
                }
            }
        }

        return fresh ? -1 : time;
    }
    bool isSafe(int i, int j, int n, int m) {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
};