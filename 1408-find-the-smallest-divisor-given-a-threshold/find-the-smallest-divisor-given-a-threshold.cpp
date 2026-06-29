class Solution {
public:
    int findsum(vector<int>& nums, int divisor) {

        int sum =0 ;
         for (int i = 0; i < nums.size(); i++) {
            sum += ceil((float)nums[i] / divisor);
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1;

        int high = *max_element(nums.begin(), nums.end());

        while (low < high) {
            int mid = (low + high) / 2;

            int sum = findsum(nums, mid);

            if (sum > threshold) {
                low = mid + 1;
            }

            else {
                high = mid;
            }
        }

        return low;
    }
};