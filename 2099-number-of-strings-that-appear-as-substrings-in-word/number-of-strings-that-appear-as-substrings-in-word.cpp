class Solution
{
    public:
        bool match(string s, string word)
        {

            if (word.find(s)==-1)
            {
                return false;
            }

            return true;
        }

    int numOfStrings(vector<string> &patterns, string word)
    {

        int count = 0;
        for (int i = 0; i < patterns.size(); i++)
        {
            if (match(patterns[i], word))
            {
                count++;
            }
        }

        return count;
    }
};