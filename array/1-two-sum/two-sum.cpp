class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            int moreNeeded = target - nums[i];
            if(mpp.find(moreNeeded) != mpp.end()){
                return {i, mpp[moreNeeded]};
            }
            mpp[nums[i]] = i;
        }
        return {-1, -1};
    }
};