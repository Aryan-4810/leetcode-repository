// Last updated: 5/5/2026, 1:31:22 PM
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        vector<int> lsum(nums.size(), 0);
5        vector<int> rsum(nums.size(), 0);
6        for (int i = 1; i < nums.size(); ++i) {
7            lsum[i] = lsum[i - 1] + nums[i - 1];
8        }
9        for (int i = nums.size() - 2; i >= 0; --i) {
10            rsum[i] = rsum[i + 1] + nums[i + 1];
11        }
12        for (int i = 0; i < nums.size(); i++) {
13            if (lsum[i] == rsum[i])
14                return i;
15        }
16        return -1;
17    }
18};