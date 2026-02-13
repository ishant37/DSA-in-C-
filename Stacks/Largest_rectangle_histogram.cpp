#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> LargestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> left(n), right(n);
    stack<int> s;

    // Find the nearest smaller to the left
    for (int i = 0; i < n; i++) {
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    // Clear the stack to reuse it for the right side
    while (!s.empty()) {
        s.pop();
    }

    // Find the nearest smaller to the right
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    // Calculate the maximum area
    int maxArea = 0;
    for (int i = 0; i < n; i++) {
        int width = right[i] - left[i] - 1;
        int area = heights[i] * width;
        maxArea = max(maxArea, area);
    }

    return {maxArea};
}
int main() {
    vector<int> heights = {3, 5, 1, 7, 5, 9};
    vector<int> result = LargestRectangleArea(heights);
    cout << "Largest Rectangle Area: "<<result[0];
    return 0;
}