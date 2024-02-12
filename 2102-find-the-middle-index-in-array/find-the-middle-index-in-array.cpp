class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        int ls=0,rs;
        for(int i=0;i<nums.size();i++){
            rs=s-ls-nums[i];
            if(rs==ls){
                return i;
            }
            ls+=nums[i];
        }
        return -1;
    }
};