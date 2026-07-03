class Solution
{
    public:
        vector<int> dailyTemperatures(vector<int> &tem)
        {



int n= tem.size();
            vector<int> ans(n, 0);
            stack<int> st;

            st.push(0);
            for (int i = 0; i < tem.size(); i++)
            {

                int count = 0;

                while (!st.empty() && tem[st.top()] < tem[i])
                {
                    int idx = st.top();
                    st.pop();

                    ans[idx] = i - idx;
                }


                st.push(i);
            }

            return ans;
        }
};