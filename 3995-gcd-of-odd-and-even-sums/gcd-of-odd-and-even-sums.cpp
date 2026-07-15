class Solution
{
    public:

        int sum(int n)
        {
            int esum = 0;
            int osum = 0;
int size=2*n;
            for (int i = 1; i <= size; i++)
            {

                if (i % 2 == 0)
                {
                    esum += i;
                }
                else
                {
                    osum += i;
                }
            }
            return gcd(esum, osum);
        }

    int gcdOfOddEvenSums(int n)
    {

        return sum(n);
    }
};