// Last updated: 10/11/2026, 1:04:03 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low = 0;
5        int high = nums.size() - 1;
6        while (low <= high) {
7            int mid = low + (high - low) / 2;
8            if (nums[mid] < target) {
9                low = mid + 1;
10            } else if (target < nums[mid]) {
11                high = mid - 1;
12            } else {
13                return mid;
14            }
15        }
16        return -1;
17    }
18};