class Solution:
    def f(self,ind,nums,ds,ans):
        ans.append(ds.copy())
        for i in range(ind,len(nums)):
            if(i!=ind and nums[i]==nums[i-1]):
                continue
            ds.append(nums[i])
            self.f(i+1,nums,ds,ans)
            ds.pop()
    def subsetsWithDup(self, nums: list[int]) -> list[list[int]]:
        nums.sort()
        ds=[]
        ans=[]
        self.f(0,nums,ds,ans)
        return ans
        