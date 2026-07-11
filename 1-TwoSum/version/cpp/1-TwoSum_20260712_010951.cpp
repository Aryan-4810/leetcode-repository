// Last updated: 7/12/2026, 1:09:51 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mp;
5        for (int i = 0; i < nums.size(); i++) {
6            int x = target - nums[i];
7            if (mp.count(x)) {
8                return {(mp[x]), i};
9            }
10            mp[nums[i]] = i;
11        }
12        return {};
13    }
14};