class Solution
{
    public:
        int minPenalty(int period, vector<int> &lights, vector<int> &arrivalTime)
        {
            int maxi = 0;

            int maxLight = *max_element(lights.begin(), lights.end());
            

            for (int i = 0; i < arrivalTime.size(); i++)
            {
                int w = 0;
                int r = arrivalTime[i] % period;

                if (r >= maxLight)
                {
                    w = period - r;

                    maxi = max(w, maxi);
                }
                
            }

            return maxi;
        }
};