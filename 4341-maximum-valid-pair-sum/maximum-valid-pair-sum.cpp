class Solution
{
    public:
        int maxValidPairSum(vector<int> &nums, int k)
        {

            int n = nums.size();
            int maxi = INT_MIN;

            int maxl = nums[0];

            for (int j = k; j < n; j++)
            {

                maxl = max(maxl, nums[j - k]);

                maxi = max(maxi, maxl+ nums[j]);
            }

            return maxi;
        }
};