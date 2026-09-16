// Last updated: 9/16/2026, 9:45:18 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> set;
5        for (int i = 0; i < nums.size(); i++) {
6            if (set.count(nums[i])) {
7                return true;
8            }
9            set.insert(nums[i]);
10        }
11        return false;
12    }
13};