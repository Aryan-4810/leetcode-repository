// Last updated: 9/16/2026, 9:31:16 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mpp;
5        for (int i = 0; i < nums.size(); i++) {
6            int x = target - nums[i];
7            if (mpp.count(x)) {
8                return {(mpp[x]), i};
9            }
10            mpp[nums[i]] = i;
11        }
12        return {};
13    }
14};