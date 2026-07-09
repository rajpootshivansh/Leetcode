class Solution
{
    public:
        bool isPalindrome(string s)
        {

            string converted = "";

            for (auto it: s)
            {
                if (isalnum(it))
                {
                    converted += tolower(it);
                }
            }

            int l = 0;

            int r = converted.size()-1;

            while (l < r)
            {
                if (converted[l] != converted[r])
                {
                    return false;
                }

                l++;
                r--;
            }

            return true;
        }
};