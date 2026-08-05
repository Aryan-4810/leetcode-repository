// Last updated: 8/5/2026, 3:01:26 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>>ans;
5        sort(nums.begin(),nums.end());
6        for(int i=0;i<nums.size();i++){
7            if(i>0&&nums[i]==nums[i-1]) continue;
8            int j=i+1;
9            int k=nums.size()-1;
10            while(j<k){
11                int sum=nums[i]+nums[j]+nums[k];
12                if(sum<0){
13                    j++;
14                }
15                else if(sum>0){
16                    k--;
17                }
18                else{
19                    vector<int>temp{nums[i],nums[j],nums[k]};
20                    ans.push_back(temp);
21                    j++;
22                    k--;
23                    while(j<k&&nums[j]==nums[j-1]){
24                        j++;
25                    }
26                    while(j<k&&nums[j]==nums[k+1]){
27                        k--;
28                    }
29                }
30            }
31        }
32        return ans;
33    }
34};