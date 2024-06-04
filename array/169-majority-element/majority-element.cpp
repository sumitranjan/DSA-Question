class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            int value = nums[i];
            mpp[value]++;
        }

        int count = INT_MIN;
        int majorityElement = 0;
        for(auto &pair : mpp){
            if(pair.second > count){
                count = pair.second;
                majorityElement = pair.first;
            }
        }
        return majorityElement;
    }
};