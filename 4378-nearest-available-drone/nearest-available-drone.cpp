class Solution
{
    public:
        int nearestDrone(vector<vector < int>> &drones, vector< int > &target)
        {

            int mini = INT_MAX;

           	// unordered_map<int,int>mp;

            int index = -1;
            for (int i = 0; i < drones.size(); i++)
            {

                int dis = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
                if (dis <=drones[i][2])
                {
                   	//can reaches 
                    if (dis < mini)
                    {

                        mini = dis;

                        index = i;
                    }
                }
            }
            return index;
        }
};