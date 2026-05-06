// Last updated: 5/7/2026, 12:01:21 AM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int low = 0;
5        int mid = 0;
6        int high = nums.size() - 1;
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[mid] == 0) {
9                swap(nums[low], nums[mid]);
10                mid++;
11                low++;
12            } else if (nums[mid] == 1) {
13                mid++;
14            } else {
15                swap(nums[high], nums[mid]);
16                high--;
17            }
18        }
19    }
20};