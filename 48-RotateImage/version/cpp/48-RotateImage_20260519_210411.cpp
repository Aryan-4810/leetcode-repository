// Last updated: 5/19/2026, 9:04:11 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        for (int i = 0; i < matrix.size() - 1; i++) {
5            for (int j = i + 1; j < matrix.size(); j++) {
6                swap(matrix[i][j], matrix[j][i]);
7            }
8        }
9        for (int i = 0; i < matrix.size(); i++) {
10            reverse(matrix[i].begin(), matrix[i].end());
11        }
12    }
13};