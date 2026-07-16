class Solution
{
    public:
        int gcd(int a, int b)
        {

            if (b == 0)
                return a;

            return gcd(b, a % b);
        }
    long long gcdSum(vector<int> &nums)
    {

        vector<int> prefixGcd;
        int n = nums.size();

        int mx = nums[0];
       	// int temp = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
           	// temp = mx[i];

            prefixGcd.push_back(gcd(mx, nums[i]));
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans = 0;

        int left = 0;
        int right = n - 1;

        while (left < right)
        {
            ans += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }

        return ans;
    }
};