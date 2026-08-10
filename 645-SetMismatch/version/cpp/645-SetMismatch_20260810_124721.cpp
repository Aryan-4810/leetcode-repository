// Last updated: 8/10/2026, 12:47:21 PM
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
11            if (hash[i] == 2) {
12                repeating = i;
13            }
14            else if (hash[i] == 0) {
15                missing = i;
16            }
17            if (repeating != -1 && missing != -1) {
18                break;
19            }
20        }
21        return {repeating, missing};
22    }
23};