// Last updated: 10/4/2026, 3:10:23 PM
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        vector<vector<int>> result;
5        sort(nums.begin(), nums.end());
6        for (int i = 0; i < nums.size(); i++) {
7            if (i > 0 && nums[i] == nums[i - 1])
8                continue;
9            for (int j = i + 1; j < nums.size(); j++) {
10                if (j != i + 1 && nums[j] == nums[j - 1])
11                    continue;
12                int k = j + 1;
13                int l = nums.size() - 1;
14                while (k < l) {
15                    long long sum = 0;
16                    sum += nums[i];
17                    sum += nums[j];
18                    sum += nums[k];
19                    sum += nums[l];
20                    if (sum < target)
21                        k++;
22                    else if (sum > target)
23                        l--;
24                    else {
25                        vector<int> temp{nums[i], nums[j], nums[k], nums[l]};
26                        result.push_back(temp);
27                        k++;
28                        l--;
29                        while (k < l && nums[k] == nums[k - 1])
30                            k++;
31                        while (k < l && nums[l] == nums[l + 1])
32                            l--;
33                    }
34                }
35            }
36        }
37        return result;
38    }
39};