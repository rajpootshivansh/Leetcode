class Solution
{
    public:
        bool rotateString(string s, string goal)
        {
            string check = s + s;

            int n = s.size();

            int size = check.find(goal[0]);

            if (s.size() != goal.size())
            {
                return false;
            }
            if (check.find(goal) != string::npos)
            {
                return true;
            }

            return false;
        }
};