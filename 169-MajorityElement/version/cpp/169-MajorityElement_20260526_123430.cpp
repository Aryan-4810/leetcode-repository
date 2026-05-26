// Last updated: 5/26/2026, 12:34:30 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int cnt = 0;
5        int el;
6        for (int i = 0; i < nums.size(); i++) {
7            if (cnt == 0) {
8                cnt = 1;
9                el = nums[i];
10            } else if (nums[i] == el) {
11                cnt++;
12            } else {
13                cnt--;
14            }
15        }
16        int count1 = 0;
17        for (int i = 0; i < nums.size(); i++) {
18            if (nums[i] == el) {
19                count1++;
20            }
21            if (count1 > nums.size() / 2) {
22                return el;
23            }
24        }
25        return -1;
26    }
27};