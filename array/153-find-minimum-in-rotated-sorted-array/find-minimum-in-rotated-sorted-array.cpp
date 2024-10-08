class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        int minValue = INT_MAX;
        while(low <= high){
            int mid = (low+high)/2;

            if(nums[low] <= nums[mid]){
                minValue = min(minValue, nums[low]);
                low = mid + 1;
            }
            else{
                minValue = min(minValue, nums[mid]);
                high = mid - 1;
            }
        }
        return minValue;
    }
};