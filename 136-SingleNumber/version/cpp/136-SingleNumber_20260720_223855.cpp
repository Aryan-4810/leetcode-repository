// Last updated: 7/20/2026, 10:38:55 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        unordered_map<int,int>freq;
5        for(int num: nums){
6            freq[num]++;
7        }
8        for(int num:nums){
9            if(freq[num]==1){
10                return num;
11            }
12        }
13        return -1;
14    }
15};