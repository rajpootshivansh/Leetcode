class Solution
{
    public:

        int setbits(int n)
        {
            int count = 0;
            while (n)
            {
                count += n &1;
                n >>= 1;
            }
            return count;
        }

    bool isPowerOfTwo(int n)
    {



if(n<=0) return false;
        if (setbits(n) == 1)
        {
            return true;
        }

        return false;
    }
};