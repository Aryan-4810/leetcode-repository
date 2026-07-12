// Last updated: 7/12/2026, 10:39:06 PM
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        vector<int> result;
5        for (int i = 0; i < m; i++) {
6            result.push_back(nums1[i]);
7        }
8        for (int i = 0; i < n; i++) {
9            result.push_back(nums2[i]);
10        }
11        sort(result.begin(), result.end());
12        for (int i = 0; i < m + n; i++) {
13            nums1[i] = result[i];
14        }
15    }
16};