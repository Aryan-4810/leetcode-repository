// Last updated: 8/9/2026, 1:46:41 AM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int low = 0;
5        int high = nums.size() - 1;
6        int ans = INT_MAX;
7        while (low <= high) {
8            int mid = low + (high - low) / 2;
9            if (nums[low] <= nums[high]) {
10                ans = min(ans, nums[low]);
11                break;
12            }
13            if (nums[low] <= nums[mid]) {
14                ans = min(ans, nums[low]);
15                low = mid + 1;
16
17            } else {
18                ans = min(ans, nums[mid]);
19                high = mid - 1;
20            }
21        }
22        return ans;
23    }
24};