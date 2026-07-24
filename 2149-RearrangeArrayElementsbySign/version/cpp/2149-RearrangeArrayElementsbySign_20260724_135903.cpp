// Last updated: 7/24/2026, 1:59:03 PM
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        vector<int> ans(nums.size(), 0);
5        int posIndex = 0;
6        int negIndex = 1;
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] < 0) {
9                ans[negIndex] = nums[i];
10                negIndex += 2;
11            } else {
12                ans[posIndex] = nums[i];
13                posIndex += 2;
14            }
15        }
16        return ans;
17    }
18};