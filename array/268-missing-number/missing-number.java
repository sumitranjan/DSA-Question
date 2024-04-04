class Solution {
    public int missingNumber(int[] nums) {
        int totalSum = nums.length * (nums.length + 1) /2;
        int giveSum = 0;
        for(int i=0; i<nums.length; i++){
            giveSum += nums[i];
        }
        return totalSum - giveSum;
    }
}

