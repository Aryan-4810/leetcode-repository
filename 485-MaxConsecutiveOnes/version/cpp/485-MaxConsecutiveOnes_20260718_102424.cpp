// Last updated: 7/18/2026, 10:24:24 AM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count = 0;
5        int maxCount = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 1) {
8                count++;
9            } else {
10                count = 0;
11            }
12            maxCount = max(count, maxCount);
13        }
14        return maxCount;
15    }
16};