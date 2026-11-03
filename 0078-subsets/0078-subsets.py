class Solution:
    def f(self,ind,s,nums,ds,ans):
        n=len(nums)
        if(ind==n):
            ans.append(ds.copy())
            return
        ds.append(nums[ind])
        self.f(ind+1,s+nums[ind],nums,ds,ans)
        ds.pop()
        self.f(ind+1,s,nums,ds,ans)
    def subsets(self, nums: list[int]) -> list[list[int]]:
        ds=[]
        ans=[]
        self.f(0,0,nums,ds,ans)
        ans.sort()
        return ans
        