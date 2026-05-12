// Last updated: 5/12/2026, 8:55:42 PM
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        vector<int> ans(nums.size(), 0);
5        int posInt = 0;
6        int negInt = 1;
7        int index = 0;
8        for (int i = 0; i < nums.size(); i++) {
9            if (nums[i] < 0) {
10                ans[negInt] = nums[i];
11                negInt += 2;
12            } else {
13                ans[posInt] = nums[i];
14                posInt += 2;
15            }
16        }
17        return ans;
18    }
19};