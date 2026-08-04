class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {



if (nums.empty()) return {};
        sort(nums.begin(), nums.end());
        int n = nums.size();



        int mini = nums[0];
        int maxi = nums[n-1];

        vector<int> ans;
        int l = 0;
        for (int i = mini; i <= maxi; i++) {

            if (nums[l] == i) {
               
                l++;
            }

            else{
                 ans.push_back(i);
            }

         
        }

        return ans;
    }
};