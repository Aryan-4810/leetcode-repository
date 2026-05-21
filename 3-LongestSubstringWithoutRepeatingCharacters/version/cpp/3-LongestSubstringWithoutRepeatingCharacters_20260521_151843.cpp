// Last updated: 5/21/2026, 3:18:43 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        if (s.size() == 0)
5            return 0;
6        unordered_set<int> st;
7        int left = 0;
8        int longest = 0;
9        for (int right = 0; right < s.size(); right++) {
10            while (st.find(s[right]) != st.end()) {
11                st.erase(s[left]);
12                left++;
13            }
14            st.insert(s[right]);
15            longest = max(longest, right - left + 1);
16        }
17        return longest;
18    }
19};