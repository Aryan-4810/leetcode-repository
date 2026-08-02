// Last updated: 8/3/2026, 12:28:19 AM
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        vector<int> ls;
5        unordered_map<int, int> mpp;
6        int n = nums.size();
7        int mini = (n / 3) + 1;
8        for (int i = 0; i < nums.size(); i++) {
9            mpp[nums[i]]++;
10            if (mpp[nums[i]] == mini) {
11                ls.push_back(nums[i]);
12            }
13            if (ls.size() == 2)
14                break;
15        }
16        sort(ls.begin(), ls.end());
17        return ls;
18    }
19};