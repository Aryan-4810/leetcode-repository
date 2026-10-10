// Last updated: 10/11/2026, 12:09:19 AM
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        vector<int> result;
5        unordered_map<int, int> freq;
6        int mini = (nums.size() / 3) + 1;
7        for (int x : nums) {
8            freq[x]++;
9            if (mini == freq[x]) {
10                result.push_back(x);
11            }
12            if (result.size() == 2) {
13                break;
14            }
15        }
16        sort(result.begin(), result.end());
17        return result;
18    }
19};