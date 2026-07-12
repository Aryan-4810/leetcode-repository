// Last updated: 7/12/2026, 1:44:37 PM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> result;
5        sort(nums1.begin(), nums1.end());
6        sort(nums2.begin(), nums2.end());
7        int i = 0;
8        int j = 0;
9        while (i < nums1.size() && j < nums2.size()) {
10            if (nums1[i] < nums2[j]) {
11                i++;
12            } else if (nums2[j] < nums1[i]) {
13                j++;
14            } else {
15                if (result.empty() || result.back() != nums1[i]) {
16                    result.push_back(nums1[i]);
17                }
18                i++;
19                j++;
20            }
21        }
22        return result;
23    }
24};