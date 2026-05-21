// Last updated: 5/21/2026, 3:17:59 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<int> st;
5        int left = 0;
6        int longest = 0;
7        for (int right = 0; right < s.size(); right++) {
8            while (st.find(s[right]) != st.end()) {
9                st.erase(s[left]);
10                left++;
11            }
12            st.insert(s[right]);
13            longest = max(longest, right - left + 1);
14        }
15        return longest;
16    }
17};