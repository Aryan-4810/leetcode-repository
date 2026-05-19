// Last updated: 5/19/2026, 12:39:21 PM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        if (nums.size() == 0)
5            return 0;
6        unordered_set<int> st(nums.begin(), nums.end());
7        int longest = 1;
8        for (int num : st) {
9            if (st.find(num - 1) == st.end()) {
10                int cnt = 1;
11                int x = num;
12                while (st.find(x + 1) != st.end()) {
13                    cnt++;
14                    x++;
15                }
16                longest = max(longest, cnt);
17            }
18        }
19        return longest;
20    }
21};