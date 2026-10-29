class Solution:
    def f(self,ind,arr, target,ds,ans):
        if ind==len(arr):
            if target==0:
                ans.append(ds.copy())
            return
        if arr[ind]<=target:
            ds.append(arr[ind])
            self.f(ind,arr,target-arr[ind],ds,ans)
            ds.pop()
        self.f(ind+1,arr,target,ds,ans)
    def combinationSum(self, candidates: list[int], target: int) -> list[list[int]]:
        ans=[]
        ds=[]
        self.f(0,candidates,target,ds,ans)
        return ans
        