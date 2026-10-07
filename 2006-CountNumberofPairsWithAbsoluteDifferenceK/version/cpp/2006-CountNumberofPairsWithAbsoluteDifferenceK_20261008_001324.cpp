// Last updated: 10/8/2026, 12:13:24 AM
1class Solution {
2public:
3    int countKDifference(vector<int>& nums, int k) {
4        int count = 0;
5        for (int i = 0; i < nums.size(); i++) {
6            for (int j = 0; j < nums.size(); j++) {
7                if (nums[i] - nums[j] == k) {
8                    count++;
9                }
10            }
11        }
12        return count;
13    }
14};