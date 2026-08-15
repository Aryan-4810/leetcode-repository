// Last updated: 8/15/2026, 11:58:43 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> result;
5        sort(nums.begin(), nums.end());
6        for (int i = 0; i < nums.size(); i++) {
7            if (i > 0 && nums[i] == nums[i - 1]) {
8                continue;
9            }
10            int j = i + 1;
11            int k = nums.size() - 1;
12            while (j < k) {
13                int sum = nums[i] + nums[j] + nums[k];
14                if (sum == 0) {
15                    vector<int> temp{nums[i], nums[j], nums[k]};
16                    result.push_back(temp);
17                    j++;
18                    k--;
19                    while (j < k && nums[j] == nums[j - 1]) {
20                        j++;
21                    }
22                    while (j < k && nums[k] == nums[k + 1]) {
23                        k--;
24                    }
25                } else if (sum < 0) {
26                    j++;
27                } else {
28                    k--;
29                }
30            }
31        }
32        return result;
33    }
34};