class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int majEl = nums[0];
        for(int i=1; i<n; i++){
            if(count == 0){
                majEl = nums[i];
                count++;
            }
            else if(majEl == nums[i]){
                count++;
            }
            else{
                count--;
            }
        } 
        return majEl;
    }
};