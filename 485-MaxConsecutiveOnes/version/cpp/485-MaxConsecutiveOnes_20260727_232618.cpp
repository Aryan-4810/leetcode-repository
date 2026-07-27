// Last updated: 7/27/2026, 11:26:18 PM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int maxCnt = INT_MIN;
5        int cnt = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 1) {
8                cnt++;
9            }
10            maxCnt = max(maxCnt, cnt);
11            if (nums[i] == 0) {
12                cnt = 0;
13            }
14        }
15        return maxCnt;
16    }
17};