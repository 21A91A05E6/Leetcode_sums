# class Solution:
#     def strStr(self, haystack: str, needle: str) -> int:
#         l=len(needle)
#         n=len(haystack)
#         for i in range(0,n):
#             if needle in haystack:
#                 return i
#         return -1

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if not needle:
            return 0
        if needle in haystack:
            return haystack.index(needle)
        return -1
