// Last updated: 5/11/2026, 9:01:05 PM
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        vector<int> v(nums.size(), 0);
5        int posIndex = 0;
6        int negIndex = 1;
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] < 0) {
9                v[negIndex] = nums[i];
10                negIndex += 2;
11            } else {
12                v[posIndex] = nums[i];
13                posIndex += 2;
14            }
15        }
16        return v;
17    }
18};