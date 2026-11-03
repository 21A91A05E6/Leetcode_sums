class Solution:
    def minMoves(self, nums: List[int]) -> int:
        nums.sort()
        n=len(nums)
        s=0
        for i in range(0,n-1):
            s+=nums[n-1]-nums[i]
        return s
        