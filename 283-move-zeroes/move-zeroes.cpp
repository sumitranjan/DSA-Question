class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        if(j<0) return;
        for(int i=j+1; i<n; i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                nums[i] = 0;
                j++;
            }
        }
    }
};