// Last updated: 5/26/2026, 12:57:03 PM
1class Solution {
2public:
3    vector<int> transformArray(vector<int>& nums) {
4        vector<int> temp;
5        for (int i = 0; i < nums.size(); i++) {
6            if (nums[i] % 2 == 0) {
7                temp.push_back(0);
8            }
9            if (nums[i] % 2 != 0) {
10                temp.push_back(1);
11            }
12        }
13        for (int j = 0; j < temp.size(); j++) {
14            for (int i = 0; i < temp.size() - 1; i++) {
15                if (temp[i] > temp[i + 1]) {
16                    int x = temp[i];
17                    temp[i] = temp[i + 1];
18                    temp[i + 1] = x;
19                }
20            }
21        }
22        return temp;
23    }
24};