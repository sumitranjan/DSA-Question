class Solution {
public:

    int lowerBound(vector<int>& nums, int n, int target){
        int low = 0, high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] >= target){
                high = mid - 1;
                ans = mid; 
            }
            else{
                low = mid + 1;
            }
        } 
        return ans;
    }
    int upperBound(vector<int>& nums, int n, int target){
        int low = 0, high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] > target){
                high = mid - 1;
                ans = mid; 
            }
            else{
                low = mid + 1;
            }
        } 
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerBound(nums, n, target);
        if(lb == n || nums[lb] != target) return {-1, -1};
        int ub = upperBound(nums, n, target);
        return {lb, ub-1};
    }
};