// Last updated: 5/6/2026, 11:48:13 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int count0 = 0;
5        int count1 = 0;
6        int count2 = 0;
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] == 0)
9                count0++;
10            else if (nums[i] == 1)
11                count1++;
12            else
13                count2++;
14        }
15        for (int i = 0; i < count0; i++)
16            nums[i] = 0;
17        for (int i = count0; i < count0 + count1; i++)
18            nums[i] = 1;
19        for (int i = count0 + count1; i < nums.size(); i++)
20            nums[i] = 2;
21    }
22};