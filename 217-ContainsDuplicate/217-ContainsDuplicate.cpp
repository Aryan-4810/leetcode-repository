// Last updated: 5/3/2026, 10:17:44 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            if (st.count(nums[i])) {
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};