class Solution
{
    public:
        bool canBeEqual(vector<int> &target, vector<int> &arr)
        {

            map<int, int> freq;

            for (auto it: arr)
            {
                freq[it]++;
            }

            for (auto it: target)
            {
                freq[it]--;
            }



            for (auto it: freq)
            {
                if (it.second != 0)
                {
                    return false;
                }
            }

            return true;
        }
};