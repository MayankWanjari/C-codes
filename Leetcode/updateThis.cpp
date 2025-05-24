class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<bool> used(nums.size(), false); // Track which elements are used
        int last_max = INT_MAX;

        for (int i = 0; i < k; i++) {
            int max_val = INT_MIN;
            int max_index = -1;

            for (int j = 0; j < nums.size(); j++) {
                if (!used[j] && nums[j] < last_max && nums[j] > max_val) {
                    max_val = nums[j];
                    max_index = j;
                }
            }

            if (max_index != -1) {
                used[max_index] = true;
                last_max = max_val;
            }
        }

        return last_max;
    }
};
