class Solution:
    def f(self,nums,ds,ans,freq):
        if(len(ds)==len(nums)):
            return ans.append(ds.copy())
        n=len(nums)
        for i in range(n):
            if not freq[i]:
                freq[i]=True
                ds.append(nums[i])
                self.f(nums,ds,ans,freq)
                ds.pop()
                freq[i]=False
    def permute(self, nums: list[int]) -> list[list[int]]:
        ans=[]
        ds=[]
        freq=[False]*len(nums)
        self.f(nums,ds,ans,freq)
        return ans