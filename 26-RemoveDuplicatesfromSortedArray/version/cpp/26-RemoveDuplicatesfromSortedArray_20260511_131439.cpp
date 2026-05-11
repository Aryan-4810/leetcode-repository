// Last updated: 5/11/2026, 1:14:39 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i = 0;
5        for (int j = 1; j < nums.size(); j++) {
6            if (nums[i] != nums[j]) {
7                nums[i + 1] = nums[j];
8                i++;
9            }
10        }
11        return (i + 1);
12    }
13};