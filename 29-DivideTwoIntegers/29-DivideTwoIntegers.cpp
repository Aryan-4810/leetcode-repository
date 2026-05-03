// Last updated: 5/3/2026, 10:17:54 PM
class Solution {
public:
    int divide(int dividend, int divisor) {
       if(dividend == INT_MIN && divisor == -1)
       return INT_MAX;
        else return dividend/divisor;
    }
};