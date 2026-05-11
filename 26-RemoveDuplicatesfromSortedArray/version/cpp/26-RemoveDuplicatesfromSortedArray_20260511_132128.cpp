// Last updated: 5/11/2026, 1:21:28 PM
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
11        if(j==-1) return;
12        for (int i = j + 1; i < nums.size(); i++) {
13            if (nums[i] != 0) {
14                swap(nums[i], nums[j]);
15                j++;
16            }
17        }
18    }
19};