class Solution {
public:
    long long sumAndMultiply(int n) {

        long sum = 0;
        long add = 0;

        long long k = 0;
        while (n > 0) {
            k = k * 10 + n % 10;
            n /= 10;
        }

        while (k > 0) {
            int digit = k % 10;
            add += digit;

            if (digit != 0) {
                sum = (sum * 10) + digit;
            }

            k /= 10;
        }

        return sum * add;
    }
};