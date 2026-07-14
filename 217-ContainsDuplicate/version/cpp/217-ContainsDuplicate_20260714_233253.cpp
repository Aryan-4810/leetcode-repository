// Last updated: 7/14/2026, 11:32:53 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> st;
5        for (int i = 0; i < nums.size(); i++) {
6            if (st.count(nums[i])) {
7                return true;
8            }
9            st.insert(nums[i]);
10        }
11        return false;
12    }
13};