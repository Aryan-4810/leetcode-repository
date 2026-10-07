// Last updated: 10/8/2026, 12:21:41 AM
1class Solution {
2public:
3    int countKDifference(vector<int>& nums, int k) {
4        unordered_map<int, int> freq;
5        int count = 0;
6        for (int x : nums) {
7            count += freq[x - k];
8            count += freq[x + k];
9            freq[x]++;
10        }
11        return count;
12    }
13};