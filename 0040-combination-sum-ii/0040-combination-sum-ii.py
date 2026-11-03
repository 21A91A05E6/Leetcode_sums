class Solution:
    def f(self,ind,c,t,ans,ds):
        if(t==0):
            ans.append(ds.copy())
            return
        for i in range(ind,len(c)):
            if(i>ind and c[i]==c[i-1]):
                continue
            if(c[i]>t):
                break
            ds.append(c[i])
            self.f(i+1,c,t-c[i],ans,ds)
            ds.pop()
        
    def combinationSum2(self, c: list[int], t: int) -> list[list[int]]:
        ans=[]
        ds=[]
        c.sort()
        self.f(0,c,t,ans,ds)
        return ans
        