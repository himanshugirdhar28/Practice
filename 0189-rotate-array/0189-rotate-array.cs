
public class Solution {
    public void Rotate(int[] nums, int k) {
        int n = nums.Length;
        k = k>=n ? k%n : k;
        List<int> l = new List<int>();
        for(int i=n-k;i<n;i++)
        {
            l.Add(nums[i]);
        } 
        for(int i=0;i<n-k;i++)
        {
            l.Add(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            nums[i] = l[i];
        }
    }
}