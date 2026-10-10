// Last updated: 10/10/2026, 11:25:46 PM
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        unordered_map<int, int> freq;
5        vector<int> result;
6        int total = 0;
7        int dup = 0;
8        int sum = nums.size() * (nums.size() + 1) / 2;
9        for (int x : nums) {
10            total += x;
11            freq[x]++;
12            if (freq[x] > 1) {
13                dup = x;
14            }
15        }
16        int missing = sum - total + dup;
17        result.push_back(dup);
18        result.push_back(missing);
19        return result;
20    }
21};