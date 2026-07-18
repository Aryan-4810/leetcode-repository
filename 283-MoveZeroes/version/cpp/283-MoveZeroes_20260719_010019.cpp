// Last updated: 7/19/2026, 1:00:19 AM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int j = -1;
5        for (int i = 0; i < nums.size(); i++) {
6            if (nums[i] == 0) {
7                j = i;
8                break;
9            }
10        }
11        if (j == -1)
12            return;
13        for (int i = j+1; i < nums.size(); i++) {
14            if (nums[i] != 0) {
15                swap(nums[i], nums[j]);
16                j++;
17            }
18        }
19    }
20};