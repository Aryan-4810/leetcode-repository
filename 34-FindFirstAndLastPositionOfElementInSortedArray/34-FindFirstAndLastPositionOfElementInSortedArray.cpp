// Last updated: 5/3/2026, 10:17:52 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        if (nums.size() == 0)
            return {first, last};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                first = i;
                last = i;

                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[j] == target) {
                        last = j;
                    } else
                        break;
                }
                return {first, last};
            }
        }
        return {first, last};
    }
};