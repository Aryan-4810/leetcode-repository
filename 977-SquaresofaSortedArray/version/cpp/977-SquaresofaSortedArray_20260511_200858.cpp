// Last updated: 5/11/2026, 8:08:58 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        vector<int> ans(nums.size(), 0);
5        int left = 0;
6        int right = nums.size() - 1;
7        int index = nums.size() - 1;
8        while (left <= right) {
9            int leftSquare = nums[left] * nums[left];
10            int rightSquare = nums[right] * nums[right];
11            if (leftSquare > rightSquare) {
12                ans[index] = leftSquare;
13                left++;
14            } else {
15                ans[index] = rightSquare;
16                right--;
17            }
18            index--;
19        }
20        return ans;
21    }
22};