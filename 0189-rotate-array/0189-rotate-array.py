class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k if k<n else k%n
        l = nums[n-k:] + nums[:n-k]
        for i in range(len(l)):
            nums[i] = l[i]
        