// Last updated: 5/6/2026, 2:35:10 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int sum = 0;
6        int total = (nums.size() * (nums.size() + 1)) / 2;
7        for (int i = 0; i < nums.size(); i++) {
8            sum += nums[i];
9        }
10        return total - sum;
11    }
12};