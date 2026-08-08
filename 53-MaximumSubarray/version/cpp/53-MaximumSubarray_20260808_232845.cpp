// Last updated: 8/8/2026, 11:28:45 PM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int maxi = INT_MIN;
5        int sum = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            sum += nums[i];
8            maxi = max(maxi, sum);
9            if (sum < 0) {
10                sum = 0;
11            }
12        }
13        return maxi;
14    }
15};