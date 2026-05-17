// Last updated: 5/17/2026, 9:30:05 PM
1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        if (nums.size() == 0)
5            return;
6        int ind = -1;
7        for (int i = nums.size() - 2; i >= 0; i--) {
8            if (nums[i] < nums[i + 1]) {
9                ind = i;
10                break;
11            }
12        }
13        if (ind == -1) {
14            reverse(nums.begin(), nums.end());
15            return;
16        }
17        for (int i = nums.size() - 1; i >= ind; i--) {
18            if (nums[ind] < nums[i]) {
19                swap(nums[ind], nums[i]);
20                break;
21            }
22        }
23        reverse(nums.begin() + ind + 1, nums.end());
24    }
25};