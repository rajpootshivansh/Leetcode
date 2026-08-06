class Solution {
public:
    int digit(int n) {

        int prod = 1;

        while (n > 0) {
            int digi = n % 10;

            prod *= digi;

            n=n/10;
        }
        return prod;
    }

    int smallestNumber(int n, int t) {

        for (int i = n; i <= 100; i++) {
            if (digit(i) % t == 0)
                return i;
        }

        return -1;
    }
};