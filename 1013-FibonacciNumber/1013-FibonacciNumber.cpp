// Last updated: 5/3/2026, 10:17:34 PM
class Solution {
public:
    int fib(int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        else
            return fib(n - 1) + fib(n - 2);

        return 0;
    }
};