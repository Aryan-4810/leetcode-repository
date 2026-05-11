// Last updated: 5/11/2026, 7:57:04 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        vector<int>v;
5        int sq=0;
6        for(int i=0;i<nums.size();i++){
7            v.push_back(nums[i]*nums[i]);
8        }
9        sort(v.begin(),v.end());
10        return v;
11    }
12};