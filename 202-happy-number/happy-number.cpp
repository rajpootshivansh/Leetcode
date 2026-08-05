class Solution
{
    public:

        vector<int> fun(int n)
        {
            vector<int> ans;

            while (n > 0)
            {
                int dig = n % 10;

                ans.push_back(dig);

                n /= 10;
            }

            reverse(ans.begin(), ans.end());

            return ans;
        }

    bool isHappy(int n)
    {


        unordered_set<int> st;
        int sum = n;
        while (sum != 1&& st.find(sum) == st.end())
        {
              st.insert(sum);

            vector<int> temp = fun(sum);

int newsum=0;
            for (int i = 0; i < temp.size(); i++)
            {

                newsum += temp[i] *temp[i];
            }


            sum=newsum;

            // return false;
        }

        return sum==1;
    }

};