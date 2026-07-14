// Last updated: 7/15/2026, 12:08:24 AM
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        vector<int> result;
5        for (int i = 0; i < m; i++) {
6            result.push_back(nums1[i]);
7        }
8        for (int j = 0; j < n; j++) {
9            result.push_back(nums2[j]);
10        }
11        sort(result.begin(), result.end());
12        for (int k = 0; k < m + n; k++) {
13            nums1[k] = result[k];
14        }
15    }
16};