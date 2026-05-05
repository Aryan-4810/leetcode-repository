// Last updated: 5/5/2026, 1:26:00 PM
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        for (int i = 0; i < nums.size(); i++) {
5            int lsum = 0;
6            int rsum = 0;
7            for (int j = 0; j < i; j++) {
8                lsum += nums[j];
9            }
10            for (int j = i + 1; j < nums.size(); j++) {
11                rsum += nums[j];
12            }
13            if (lsum == rsum) {
14                return i;
15            }
16        }
17        return -1;
18    }
19};