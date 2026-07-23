// Last updated: 7/23/2026, 11:01:37 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> map;
5        for (int i = 0; i < nums.size(); i++) {
6            int x = target - nums[i];
7            if (map.count(x)) {
8                return {(map[x]), i};
9            }
10            map[nums[i]] = i;
11        }
12        return {};
13    }
14};