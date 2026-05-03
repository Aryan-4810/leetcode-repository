// Last updated: 5/3/2026, 10:17:28 PM
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                temp.push_back(0);
            }
            if (nums[i] % 2 != 0) {
                temp.push_back(1);
            }
        }
        for (int j = 0; j < temp.size(); j++) {
            for (int i = 0; i < temp.size() - 1; i++) {
                if (temp[i] > temp[i + 1]) {
                    int x = temp[i];
                    temp[i] = temp[i + 1];
                    temp[i + 1] = x;
                }
            }
        }
        return temp;
    }
};