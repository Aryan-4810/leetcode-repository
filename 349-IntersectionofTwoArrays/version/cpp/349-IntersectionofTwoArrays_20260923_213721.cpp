// Last updated: 9/23/2026, 9:37:21 PM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        sort(nums1.begin(), nums1.end());
5        sort(nums2.begin(), nums2.end());
6        int i = 0;
7        int j = 0;
8        vector<int> result;
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