class Solution:
    def numberOfSteps(self, num: int) -> int:
        return self.h(num,0)
    def h(self,n,s):
        if(n==0):
            return s
        if(n%2==0):
            return self.h(n//2,s+1)
        return self.h(n-1,s+1)

        