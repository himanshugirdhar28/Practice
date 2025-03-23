public class Solution {
    public int MajorityElement(int[] nums) {
        Dictionary<int, int> d = new Dictionary<int, int>();
        foreach(int num in nums)
        {
            if( d.ContainsKey(num))
            {
                d[num] ++;
            }
            else 
            {
                d[num] = 1;
            }
        }
        var max_elem = nums[0];
        var max_elem_count = 0;
        foreach(var dict in d)
        {
            if(d[dict.Key] > max_elem_count)
            {
                max_elem = dict.Key;
                max_elem_count = d[dict.Key];
            }
        }
        return max_elem;
        
    }
}