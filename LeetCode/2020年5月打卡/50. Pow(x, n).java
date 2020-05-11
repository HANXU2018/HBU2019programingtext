class Solution {
    public double myPow(double x, int n) {
        double ans = 1;
        int sign = 1;
        if (n < 0) {
            sign = -1;
            if (n == Integer.MIN_VALUE) {
                n = -(n + 1);
                ans *= x;
            } else {
                n = -n;
            }
        }
        while (n > 0) {
            if (n % 2 == 1)
                ans *= x;
            n /= 2;
            x *= x;
        }
        return sign == 1 ? ans : 1 / ans;
    }
}