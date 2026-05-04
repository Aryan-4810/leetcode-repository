// Last updated: 5/4/2026, 8:35:24 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        if (nums[0] != 0)
6            return 0;
7        for (int i = 0; i < nums.size() - 1; i++) {
8            if (nums[i + 1] - nums[i] != 1) {
9                return nums[i] + 1;
10            }
11        }
12        return nums.size();
13    }
14};