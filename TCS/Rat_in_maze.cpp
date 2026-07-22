#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Direction utility vectors for Down, Left, Right, Up
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
char dir[] = {'D', 'L', 'R', 'U'};

bool isSafe(int x, int y, int n, vector<vector<int>>& maze, vector<vector<bool>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && !visited[x][y]);
}

void solveBacktracking(int x, int y, int n, vector<vector<int>>& maze, 
                       vector<vector<bool>>& visited, string path, vector<string>& results) {
    if (x == n - 1 && y == n - 1) {
        results.push_back(path);
        return;
    }

    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];

        if (isSafe(nextX, nextY, n, maze, visited)) {
            solveBacktracking(nextX, nextY, n, maze, visited, path + dir[i], results);
        }
    }

    visited[x][y] = false; // Backtracking step
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    vector<string> results;

    if (n > 0 && maze[0][0] == 1 && maze[n - 1][n - 1] == 1) {
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        solveBacktracking(0, 0, n, maze, visited, "", results);
    }

    if (results.empty()) {
        cout << -1 << endl;
    } else {
        for (const string& path : results) {
            cout << path << endl;
        }
    }

    return 0;
}
