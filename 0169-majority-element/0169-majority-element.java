import java.util.*;
class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> d = new HashMap<>();
        for(int i: nums)
        {
            if(d.containsKey(i))
            {
                d.put(i, d.get(i) +1);
            }
            else
            {
                d.put(i, 1);
            }
        }
        int max_elem = nums[0];
        int max_elem_count = 0;
        for (var entry : d.entrySet()) {
            if (entry.getValue() > max_elem_count) {
                max_elem_count = entry.getValue();
                max_elem = entry.getKey();
            }
        }
        return max_elem;
        
    }
}