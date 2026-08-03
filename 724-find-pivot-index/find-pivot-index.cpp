class Solution
{
    public:
        int pivotIndex(vector<int> &nums)
        {

            vector<int> suml;
            // suml.push_back(0);

            int temp=0;
            for (int i = 0; i < nums.size(); i++)
            {
                
                suml.push_back(temp);
                temp += nums[i];
            }

            vector<int> sumr;
            int temp1=0;
            for (int i = nums.size() - 1; i >=0; i--)
            { 
                sumr.push_back(temp1);
                temp1 += nums[i];
               
            }


              reverse(sumr.begin(), sumr.end()); 

            for (int i = 0; i < sumr.size(); i++)
            {
                if (suml[i] == sumr[i])
                {
                    return i;
                }
            }

            return -1;
        }
};