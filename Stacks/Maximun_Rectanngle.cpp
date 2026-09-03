#include <bits/stdc++.h>
using namespace std;

int largestRectangle(vector<int>& heights) {
    stack<int> st;
    int maxArea = 0;
    int n = heights.size();

    for (int i = 0; i <= n; i++) {
        int curr = (i == n) ? 0 : heights[i];

        while (!st.empty() && heights[st.top()] > curr) {
            int height = heights[st.top()];
            st.pop();

            int width;
            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;

            maxArea = max(maxArea, height * width);
        }

        if (i < n)
            st.push(i);
    }

    return maxArea;
}

int main() {
    vector<vector<int>> arr = {
        {1,0,1,0,0},
        {1,0,1,1,1},
        {1,1,1,1,1},
        {1,0,0,1,0}
    };

    int n = arr.size();
    int m = arr[0].size();

    int maxArea = 0;

    // Initialize with m zeroes
    vector<int> heights(m, 0);

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1)
                heights[j]++;
            else
                heights[j] = 0;
        }

        maxArea = max(maxArea, largestRectangle(heights));
    }

    cout << maxArea;

    return 0;
}
