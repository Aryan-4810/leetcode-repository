// Last updated: 7/29/2026, 11:32:27 PM
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        int top = 0;
7        int left = 0;
8        int bottom = n - 1;
9        int right = m - 1;
10        vector<int> ans;
11        while (top <= bottom && left <= right) {
12            for (int i = left; i <= right; i++) {
13                ans.push_back(matrix[top][i]);
14            }
15            top++;
16            for (int i = top; i <= bottom; i++) {
17                ans.push_back(matrix[i][right]);
18            }
19            right--;
20            if (top <= bottom) {
21                for (int i = right; i >= left; i--) {
22                    ans.push_back(matrix[bottom][i]);
23                }
24                bottom--;
25            }
26            if (left <= right) {
27                for (int i = bottom; i >= top; i--) {
28                    ans.push_back(matrix[i][left]);
29                }
30                left++;
31            }
32        }
33        return ans;
34    }
35};