// Last updated: 5/15/2026, 8:45:32 PM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        if (nums.empty())
5            return 0;
6        unordered_set<int> st(nums.begin(), nums.end());
7        int longest = 1;
8        for (int nums : st) {
9            if (st.find(nums - 1) == st.end()) {
10                int cnt = 1;
11                int x = nums;
12                while (st.find(x + 1) != st.end()) {
13                    x++;
14                    cnt++;
15                }
16                longest = max(longest, cnt);
17            }
18        }
19        return longest;
20    }
21};