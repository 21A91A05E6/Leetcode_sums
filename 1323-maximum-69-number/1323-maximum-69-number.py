class Solution:
    def maximum69Number (self, num: int) -> int:
        l=[int(digit) for digit in str(num)]
        
        for i in range(0,len(l)):
            if l[i]==6:
                l[i]=9
                break
        s=int("".join([str(d) for d in l]))
        return s    
        