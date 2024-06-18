class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans ={-1,-1};
        int first = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                if(first == 0){
                    first = 1;
                    ans[0] = i;
                    ans[1] = i; // Initialize ending position to the first occurrence

                }
                else{
                    ans[1] = i;
                }
            }
        }
        return ans;
    }
};