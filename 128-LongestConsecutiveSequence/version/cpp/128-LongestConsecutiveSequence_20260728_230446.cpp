// Last updated: 7/28/2026, 11:04:46 PM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        if (nums.size() == 0) {
5            return 0;
6        }
7        int longest = 1;
8        unordered_set<int> st(nums.begin(), nums.end());
9        for (int i = 0; i < nums.size(); i++) {
10            st.insert(nums[i]);
11        }
12        for (auto it : st) {
13            if (st.find(it - 1) == st.end()) {
14                int cnt = 1;
15                int x = it;
16                while (st.find(x + 1) != st.end()) {
17                    x = x + 1;
18                    cnt = cnt + 1;
19                }
20                longest = max(longest, cnt);
21            }
22        }
23        return longest;
24    }
25};