class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxNo = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                count++;
                maxNo = max(maxNo, count);
            }
            else{
                count = 0;
            }
        }
        return maxNo;
    }
};