// Last updated: 8/10/2026, 10:46:50 PM
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int count = 0;
5        for (int i = 0; i < nums.size(); i++) {
6            if (nums[i] > nums[(i + 1) % nums.size()]) {
7                count++;
8            }
9        }
10        return count <= 1;
11    }
12};