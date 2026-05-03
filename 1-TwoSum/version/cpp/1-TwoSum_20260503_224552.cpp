// Last updated: 5/3/2026, 10:45:52 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> box;
5        for (int i = 0; i < nums.size(); i++) {
6            int x = target - nums[i];
7            if (box.count(x)) {
8                return {box[x], i};
9            }
10            box[nums[i]] = i;
11        }
12        return {};
13    }
14};