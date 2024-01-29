class Solution:
    def reverseVowels(self, s: str) -> str:
        s=list(s)
        i=0
        j=len(s)-1
        a=False
        b=False
        c='aeiouAEIOU'
        while i<j:
            if s[i] in c:
                if s[j] in c:
                    s[i],s[j]=s[j],s[i]
                    i+=1
                    j-=1
                else:
                    j-=1
            else:
                i+=1
        s1=""
        return s1.join(s)
        