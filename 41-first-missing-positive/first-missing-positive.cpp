class Solution
{
    public:
        int firstMissingPositive(vector<int> &nums)
        {

            int i = 0;
            int n = nums.size();

            while (i < n)
            {

                if (nums[i] > 0 && nums[i] <= n)
                {
                    int correctindex = nums[i] - 1;

                    if (nums[i] != nums[correctindex])
                    {
                        int temp = nums[i];
                        nums[i] = nums[correctindex];
                        nums[correctindex] = temp;
                    }
                    else
                    {
                        i++;
                    }
                }
                else
                {
                    i++;
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (nums[i] != i + 1)
                {
                    return i + 1;
                }
            }

            return n + 1;
        }
};