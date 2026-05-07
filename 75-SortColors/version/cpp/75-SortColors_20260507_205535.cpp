// Last updated: 5/7/2026, 8:55:35 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        if (nums.size() == 0)
5            return -1;
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == target)
8                return i;
9        }
10        return -1;
11    }
12};