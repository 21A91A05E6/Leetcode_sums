class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxl=0,z=0,l=0,r=0;
        int len;
        while(r<nums.size()){
            if(nums[r]==0){
                z++;
            }
            if(z>k){
                if(nums[l]==0)z--;
                l++;
            }
            if(z<=k){
                len=r-l+1;
                maxl=max(maxl,len);
            }
            r++;
        }
        return maxl;
    }
};