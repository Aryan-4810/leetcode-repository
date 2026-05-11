// Last updated: 5/11/2026, 1:36:09 PM
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        vector<int> map;
5        for (int i = 0; i < m; i++) {
6            map.push_back(nums1[i]);
7        }
8        for (int j = 0; j < n; j++) {
9            map.push_back(nums2[j]);
10        }
11        sort(map.begin(), map.end());
12        for (int i = 0; i < m+n; i++) {
13            nums1[i] = map[i];
14        }
15    }
16};