class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int area = 0, n = heights.size();

        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[i] < heights[s.top()]) {
                int bar = s.top(); 
                s.pop();
                int pse = s.empty() ? -1 : s.top();
                int nse = i;
                area = max(area, heights[bar] * (nse - pse - 1));
            }
            s.push(i);
        }

        while (!s.empty()) {
            int bar = s.top(); 
            s.pop();
            int pse = s.empty() ? -1 : s.top();
            int nse = n;
            area = max(area, heights[bar] * (nse - pse - 1));
        }

        return area;
    }
};