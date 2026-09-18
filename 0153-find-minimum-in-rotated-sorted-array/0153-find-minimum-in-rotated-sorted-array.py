class Solution:
    def findMin(self, nums: List[int]) -> int:
        # low=0
        # high=len(nums)-1
        # mid=(low+high)//2
        # while(low<=high):
        #     if(nums[mid]>nums[high]):
        #         low=0
        #         high=mid
        #         mid=(low+high)//2
        #     else:
        #         low=mid+1
        #         high=len(nums)-1
        #         mid=(low+high)//2
        # return nums[mid]
        
        left=0
        right=len(nums)-1
        mid = (left + right) // 2
       
        while left < right:
            mid = (left + right) // 2

            if nums[mid] > nums[right]:
                left = mid + 1
            else:
                right = mid

        return nums[left]


        