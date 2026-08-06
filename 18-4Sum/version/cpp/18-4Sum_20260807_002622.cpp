// Last updated: 8/7/2026, 12:26:22 AM
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        vector<vector<int>> ans;
5        sort(nums.begin(), nums.end());
6        for (int i = 0; i < nums.size(); i++) {
7            if (i > 0 && nums[i] == nums[i - 1]) {
8                continue;
9            }
10            for (int j = i + 1; j < nums.size(); j++) {
11                if (j != i + 1 && nums[j] == nums[j - 1]) {
12                    continue;
13                }
14                int k = j + 1;
15                int l = nums.size() - 1;
16                while (k < l) {
17                    long long sum = nums[i];
18                    sum += nums[j];
19                    sum += nums[k];
20                    sum += nums[l];
21                    if (sum == target) {
22                        vector<int> temp{nums[i], nums[j], nums[k], nums[l]};
23                        ans.push_back(temp);
24                        k++;
25                        l--;
26                        while (k < l && nums[k] == nums[k - 1]) {
27                            k++;
28                        }
29                        while (k < l && nums[l] == nums[l + 1]) {
30                            l--;
31                        }
32                    } else if (sum < target) {
33                        k++;
34                    } else {
35                        l--;
36                    }
37                }
38            }
39        }
40        return ans;
41    }
42};