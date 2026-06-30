class Solution
{
    public:
        long long maxSum(vector<int> &nums, int k, int mul)
        {

            sort(nums.begin(), nums.end());

            long long sum = 0;
            long long value = 0;

            int n = nums.size();

            for (int i = n - 1; i >= n - k; i--)

            {

                long long temp1 = nums[i];
                long long temp2 = 1LL*nums[i] *mul;

                sum += max(temp1, temp2);
                mul--;
            }

            return sum;
        }
};