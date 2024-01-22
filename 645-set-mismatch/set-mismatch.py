class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:

        l=[]
        for i in nums:
            if nums.count(i)>1:
                    l.append(i)
                    break
        s=[]
        s1=0
        s2=0
        for i in nums:
            if i not in s:
                s.append(i)
        for i in s:
            s1+=i
        n=len(nums)
        for i in range(1,n+1):
            s2+=i
        l.append(s2-s1)
        return l
