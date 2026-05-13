// Last updated: 5/13/2026, 11:49:24 AM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> temp = nums;
5        vector<int> result(nums.size());
6        sort(temp.begin(), temp.end());
7        unordered_map<int, int> mpp;
8        for (int i = 0; i < temp.size(); i++) {
9            if (mpp.count(temp[i]) == 0) {
10                mpp[temp[i]] = i;
11            }
12        }
13        for (int i = 0; i < nums.size(); i++) {
14            result[i] = mpp[nums[i]];
15        }
16        return result;
17    }
18};