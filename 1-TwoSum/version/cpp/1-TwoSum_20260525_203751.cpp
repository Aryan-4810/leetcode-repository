// Last updated: 5/25/2026, 8:37:51 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mpp;
5        for (int i = 0; i < nums.size(); i++) {
6            int x = target - nums[i];
7            if (mpp.count(x)) {
8                return { (mpp[x]), i };
9            }
10            mpp[nums[i]] = i;
11        }
12        return {};
13    }
14};