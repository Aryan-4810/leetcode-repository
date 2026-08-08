// Last updated: 8/9/2026, 12:03:12 AM
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        vector<int> hash(nums.size() + 1, 0);
5        for (int i = 0; i < nums.size(); i++) {
6            hash[nums[i]]++;
7        }
8        int repeating = -1;
9        int missing = -1;
10        for (int i = 1; i <= nums.size(); i++) {
11            if (hash[i] == 2)
12                repeating = i;
13            else if (hash[i] == 0)
14                missing = i;
15            if (repeating != -1 && missing != -1) {
16                break;
17            }
18        }
19        return {repeating, missing};
20    }
21};