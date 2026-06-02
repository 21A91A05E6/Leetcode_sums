class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,r=nums.size()-1;
        while(m<=r){
            if(nums[m]==2){
                nums[m]=nums[r];
                nums[r]=2;
                r--;
            }
            else if(nums[m]==0){
                nums[m]=nums[l];
                nums[l]=0;
                m++;
                l++;
            }
            else{
                m++;
            }
        }
    }
};