class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        
        // Check if target is present at mid
        if(nums[mid] == target)
            return mid;
        // If x target, ignore left half
        else if(target < nums[mid])
            high = mid - 1;
        // If target is smaller, ignore right half
        else
            low = mid + 1; 
    }
    // If we reach here, then element was not present
    return -1;
    }
};