class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            int more = target - nums[i];
            if(mpp.find(more) != mpp.end() ){
                return {i, mpp[more]};
            }
            else{
                mpp.insert({nums[i], i});
            }
        }
        return {};
    }
};