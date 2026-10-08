// Last updated: 10/8/2026, 4:50:49 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map<int, int> freq;
5        int count = 0;
6        for (int x : nums) {
7            freq[x]++;
8            if (freq[x] > nums.size() / 2)
9                return x;
10        }
11        return -1;
12    }
13};