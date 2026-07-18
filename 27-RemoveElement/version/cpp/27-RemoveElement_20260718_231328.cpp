// Last updated: 7/18/2026, 11:13:28 PM
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int i = 0;
5        for (int j = 0; j < nums.size(); j++) {
6            if (nums[j] != val) {
7                nums[i] = nums[j];
8                i++;
9            }
10        }
11        return i;
12    }
13};