class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mpp;
        vector<int> result;
        for(int i=0; i<n; i++){
            int remValue = target - nums[i];
            if(mpp.find(remValue) != mpp.end()){
                result.push_back(i);
                result.push_back(mpp[remValue]);
                return result;
            }
            else{
                mpp[nums[i]] = i;
            }
        }
        return result;
    }
};