import java.util.HashMap;

class Solution {
    public int singleNumber(int[] nums) {
        int n = nums.length;

        // Declare the HasMap
        // And hash the given array:
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            int value = map.getOrDefault(nums[i], 0);
            map.put(nums[i], value+1);
        }

        
        
        //Find the single element and return the answer:
        for (int it : map.keySet()) {
            if (map.get(it) == 1)
                return it;
        }

        //This line will never execute
        //if the array contains a single element.
        return 0;

    }
}

//This will not work if contains negative numbers or a very large number.
//Use map data structure to hash the array elements.