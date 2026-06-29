class Solution
{
    public:
        int findKthPositive(vector<int> &arr, int k)
        {

            int i = 0;

            int current = 1;

            int count = 0;
            while (count < k)
            {

                if (i < arr.size() && current == arr[i] )
                {

                    i++;
                }
                else
                {
                    count++;
                }

                current++;
            }


            return current-1;
        }
};