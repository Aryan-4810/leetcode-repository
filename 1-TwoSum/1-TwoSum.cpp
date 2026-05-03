// Last updated: 5/3/2026, 10:18:01 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> box;
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (box.count(x)) {
                return {box[x], i};
            }
            box[nums[i]] = i;
        }
        return {};
    }
};