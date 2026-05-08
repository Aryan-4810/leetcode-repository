// Last updated: 5/8/2026, 11:59:09 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map<int,int> hash;
5        hash[nums.size()] = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            hash[nums[i]]++;
8            if (hash[nums[i]] > nums.size() / 2) {
9                return nums[i];
10            }
11        }
12        return -1;
13    }
14};