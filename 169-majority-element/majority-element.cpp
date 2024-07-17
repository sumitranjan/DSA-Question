class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        int count = 0;
        int result;
        for(auto it : mpp){
            if(it.second > count){
                count = it.second;
                result = it.first;
            }
        }
        return result;
    }
};