class Solution {
public:
    bool checksort(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
    bool check(vector<int>& nums) {

        // firt we find index of min element

        int tp = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                tp = i + 1;
                break;
            }
        }
        vector<int> ans;
        for (int i = tp; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }

        for (int i = 0; i < tp; i++) {
            ans.push_back(nums[i]);
        }

        if (checksort(ans)) {
            return true;
        }

        else
            return false;
    }
};