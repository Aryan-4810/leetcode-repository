// Last updated: 9/17/2026, 11:11:26 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        int total = n * (n + 1) / 2;
6        int sum = 0;
7        for (int i = 0; i < nums.size(); i++) {
8            sum += nums[i];
9        }
10        return total - sum;
11    }
12};