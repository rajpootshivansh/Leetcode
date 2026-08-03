class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {



             vector<pair<int, int>> arr;
            for (int i = 0; i < nums.size(); i++)
            {
                arr.push_back(make_pair(nums[i], i));
            }

            sort(arr.begin(), arr.end());

            int n = nums.size();
            int l = 0;
            int r = n -1;

            vector<int> ans;

            while (l < r)
            {

                if (arr[l].first + arr[r].first > target)
                {
                    r--;
                }
                else if (arr[l].first + arr[r].first < target)
                {
                    l++;
                }
                else
                {
                    ans.push_back(arr[l].second);
                    ans.push_back(arr[r].second);

                    l++;
                    r--;
                }
            }


            return ans;
        }
};