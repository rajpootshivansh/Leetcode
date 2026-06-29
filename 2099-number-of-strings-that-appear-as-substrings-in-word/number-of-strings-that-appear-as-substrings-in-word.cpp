class Solution
{
    public:
        bool match(string s, string word)
        {

            for (int i = 0; i < word.size(); i++)
            {

                bool ok = true;


               int  start= i;
                for (int j = 0; j < s.size(); j++)
                {

                    if (s[j] != word[start+j])
                    {
                        ok = false;

                        break;
                    }
                }

                if (ok)
                    return true;
            }

            return false;
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