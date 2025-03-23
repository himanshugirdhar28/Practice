import java.util.*;
class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k>=n ? k%n : k;
        List<Integer> l = new ArrayList<>();
        for(int i=n-k;i<n;i++)
        {
            l.add(nums[i]);
        }
        for(int i=0;i<n-k;i++)
        {
            l.add(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            nums[i]= l.get(i);
        }
        
    }
}