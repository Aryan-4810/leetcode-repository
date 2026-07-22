// Last updated: 7/22/2026, 10:48:21 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int maxProfit = 0;
5        int minPrice = INT_MAX;
6        for (int i = 0; i < prices.size(); i++) {
7            if (prices[i] < minPrice) {
8                minPrice = prices[i];
9            }
10            int profit = prices[i] - minPrice;
11            if (maxProfit < profit) {
12                maxProfit = profit;
13            }
14        }
15        return maxProfit;
16    }
17};