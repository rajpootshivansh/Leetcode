class Solution
{
    public:
        bool containsDuplicate(vector<int> &nums)
        {

            map<int, int> freq;

            for (auto it: nums)
            {
                freq[it]++;
            }

            for (auto it: freq)
            {
                if (it.second > 1)
                {
                    return true;
                }
            }


            return false;
        }
};