// Last updated: 7/19/2026, 11:42:28 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int total = 0;
6        int sum = (nums.size() * (nums.size() + 1)) / 2;
7        for (int i = 0; i < nums.size(); i++) {
8            total += nums[i];
9        }
10        return sum - total;
11    }
12};