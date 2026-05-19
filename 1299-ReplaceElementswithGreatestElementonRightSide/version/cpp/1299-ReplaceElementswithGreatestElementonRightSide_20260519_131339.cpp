// Last updated: 5/19/2026, 1:13:39 PM
1class Solution {
2public:
3    vector<int> replaceElements(vector<int>& arr) {
4        int maxi = -1;
5        for (int i = arr.size() - 1; i >= 0; i--) {
6            int temp = arr[i];
7            arr[i] = maxi;
8            maxi = max(maxi, temp);
9        }
10        return arr;
11    }
12};