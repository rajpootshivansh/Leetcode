class Solution
{
    public:

        int findsum(int n)
        {
            int sum = 0;

            while (n > 0)
            {

                int digi = n % 10;
                sum += digi;

                n /= 10;
            }

            return sum;
        }
    int sumOfTheDigitsOfHarshadNumber(int x)
    {

        if (x % findsum(x) == 0)
        {
            return findsum(x);
        }

        return -1;
    }
};