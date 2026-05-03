// Last updated: 5/3/2026, 10:17:33 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if (nums.size() == 0)
            return {};
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;
    }
};