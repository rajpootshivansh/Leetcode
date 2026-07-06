class Solution
{
    public:

        int removeCoveredIntervals(vector<vector < int>> &intervals)
        {

            sort(intervals.begin(), intervals.end(),
               [](vector<int> &a, vector<int> &b)
                {
                    if (a[0] == b[0])
                        return a[1] > b[1];

                    return a[0] < b[0];
	});
            int count = 0;

            int maxEnd = 0;
            for (int i = 0; i < intervals.size(); i++)
            {

                int start = intervals[i][0];
                int end = intervals[i][1];

                if (maxEnd >= end)
                {
                    count++;
                }
                else
                {
                    maxEnd = end;
                }

               	// maxEnd = max(maxEnd, end);
            }
            return intervals.size() - count;
        }
};