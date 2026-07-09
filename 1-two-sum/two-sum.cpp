class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            int left = 0;
            int right = nums.size() - 1;

            vector<pair<int, int>> arr;
            for (int i = 0; i < nums.size(); i++)
            {
                arr.push_back(make_pair(nums[i], i));
            }

            sort(arr.begin(), arr.end());

            while (left < right &&
                (arr[left].first + arr[right].first) != target)
            {

                if ((arr[left].first + arr[right].first) > target)
                {

                    right--;
                }
                else
                {
                    left++;
                }
            }

            vector<int> ans;

            ans.push_back(arr[left].second);
            ans.push_back(arr[right].second);
            return ans;
        }
};