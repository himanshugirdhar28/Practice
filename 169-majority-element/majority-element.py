class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        d = {}
        for i in nums:
            if i in d:
                d[i] +=1
            else:
                d[i] = 1
        max_elem = nums[0]
        max_elem_count = 0
        for i in d.keys():
            if d[i] > max_elem_count:
                max_elem = i
                max_elem_count = d[i]
        return max_elem
