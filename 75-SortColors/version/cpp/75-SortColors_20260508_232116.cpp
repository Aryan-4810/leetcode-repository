// Last updated: 5/8/2026, 11:21:16 PM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int maxCount = 0;
5        int count = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 1) {
8                count++;
9            }
10            if (nums[i] == 0) {
11                count = 0;
12            }
13            maxCount = max(count, maxCount);
14        }
15        return maxCount;
16    }
17};