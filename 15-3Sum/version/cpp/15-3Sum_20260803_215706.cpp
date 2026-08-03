// Last updated: 8/3/2026, 9:57:06 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> ans;
5        sort(nums.begin(), nums.end());
6        for (int i = 0; i < nums.size(); i++) {
7            if (i > 0 && nums[i] == nums[i - 1]) {
8                continue;
9            }
10            int j = i + 1;
11            int k = nums.size() - 1;
12            while (j < k) {
13                int sum = nums[i] + nums[j] + nums[k];
14                if (sum < 0) {
15                    j++;
16                } else if (sum > 0) {
17                    k--;
18                } else {
19                    vector<int> temp{nums[i], nums[j], nums[k]};
20                    ans.push_back(temp);
21                    j++;
22                    k--;
23                    while (j < k && nums[j] == nums[j - 1]) {
24                        j++;
25                    }
26                    while (j < k && nums[k] == nums[k + 1]) {
27                        k--;
28                    }
29                }
30            }
31        }
32        return ans;
33    }
34};