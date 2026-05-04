// Last updated: 5/4/2026, 8:02:00 PM
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        for (int i = 0; i < nums.size(); i++) {
5            int lsum = 0, rsum = 0;
6            for (int j = 0; j < i; j++) {
7                lsum += nums[j];
8            }
9            for (int j = i + 1; j < nums.size(); j++) {
10                rsum += nums[j];
11            }
12            if (lsum == rsum) {
13                return i;
14            }
15        }
16        return -1;
17    }
18};