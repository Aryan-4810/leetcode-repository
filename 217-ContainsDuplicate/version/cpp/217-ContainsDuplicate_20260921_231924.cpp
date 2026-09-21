// Last updated: 9/21/2026, 11:19:24 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int sum = 0;
5        int total = nums.size() * (nums.size() + 1) / 2;
6        for (int i = 0; i < nums.size(); i++) {
7            sum += nums[i];
8        }
9        return total - sum;
10    }
11};