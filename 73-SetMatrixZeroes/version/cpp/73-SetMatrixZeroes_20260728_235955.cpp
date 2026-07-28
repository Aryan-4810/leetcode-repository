// Last updated: 7/28/2026, 11:59:55 PM
1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        vector<int> row(n,0);
7        vector<int> col(m,0);
8        for (int i = 0; i < n; i++) {
9            for (int j = 0; j < m; j++) {
10                if (matrix[i][j] == 0) {
11                    row[i] = 1;
12                    col[j] = 1;
13                }
14            }
15        }
16        for (int i = 0; i < n; i++) {
17            for (int j = 0; j < m; j++) {
18                if (row[i] || col[j]) {
19                    matrix[i][j] = 0;
20                }
21            }
22        }
23    }
24};