// Last updated: 5/3/2026, 10:18:00 PM
class Solution {
public:
    int reverse(int x) {
        int ans = 0, revd = 0;
        while (x != 0) {
            ans = x % 10;

            if (revd > INT_MAX / 10 || (revd == INT_MAX / 10 && ans > 7))
                return 0;

            if (revd < INT_MIN / 10 || (revd == INT_MIN / 10 && ans < -8))
                return 0;
            revd = revd * 10 + ans;
            x = x / 10;
        }
        return revd;
    }
};