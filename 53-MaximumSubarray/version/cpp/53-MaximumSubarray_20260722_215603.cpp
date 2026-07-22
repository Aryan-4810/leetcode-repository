// Last updated: 7/22/2026, 9:56:03 PM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int maxi=INT_MIN;
5        int sum=0;
6        for(int i=0;i<nums.size();i++){
7            sum+=nums[i];
8            if(sum>maxi){
9                maxi=sum;
10            }
11            if(sum<0){
12                sum=0;
13            }
14        }
15        return maxi;
16    }
17};