// Last updated: 5/3/2026, 10:17:30 PM
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        if (nums.size() == 0)
            return {};
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] < target)
                    count++;
            }
        }
        return count;
    }
};