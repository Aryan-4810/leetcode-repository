// Last updated: 7/14/2026, 11:52:22 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        unordered_map<int, int> count;
5        if (s.length() != t.length())
6            return false;
7        for (int i = 0; i < s.size(); i++) {
8            count[s[i]]++;
9            count[t[i]]--;
10        }
11        for (auto& [ch, freq] : count) {
12            if (freq != 0)
13                return false;
14        }
15        return true;
16    }
17};