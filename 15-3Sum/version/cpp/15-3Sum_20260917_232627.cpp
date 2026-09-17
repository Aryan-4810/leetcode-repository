// Last updated: 9/17/2026, 11:26:27 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> result;
5        sort(nums.begin(), nums.end());
6        for (int i = 0; i < nums.size(); i++) {
7            if (i > 0 && nums[i - 1] == nums[i])
8                continue;
9            int j = i + 1;
10            int k = nums.size() - 1;
11            while (j < k) {
12                int sum = nums[i] + nums[j] + nums[k];
13                if (sum < 0) {
14                    j++;
15                } else if (sum > 0) {
16                    k--;
17                } else {
18                    vector<int> temp{nums[i], nums[j], nums[k]};
19                    result.push_back(temp);
20                    j++;
21                    k--;
22                    while (j < k && nums[j] == nums[j - 1]) {
23                        j++;
24                    }
25                    while (j < k && nums[k] == nums[k + 1]) {
26                        k--;
27                    }
28                }
29            }
30        }
31        return result;
32    }
33};