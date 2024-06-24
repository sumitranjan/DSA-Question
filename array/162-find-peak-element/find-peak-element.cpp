class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // Edge case
        if (n == 1) return 0;

        int low = 0, high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;

            // Compare middle element with its next element
            if (nums[mid] > nums[mid + 1]) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        // When low == high, it points to a peak element
        return low;
    }
};
