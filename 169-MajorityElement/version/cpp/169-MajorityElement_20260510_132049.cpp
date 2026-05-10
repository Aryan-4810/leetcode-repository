// Last updated: 5/10/2026, 1:20:49 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int cnt = 0;
5        int el;
6        int count1 = 0;
7        for (int i = 0; i < nums.size(); i++) {
8            if (cnt == 0) {
9                el = nums[i];
10                cnt = 1;
11            } else if (el == nums[i]) {
12                cnt++;
13            } else {
14                cnt--;
15            }
16        }
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