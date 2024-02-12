class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        // return s;
        int ls=0,rs;
        for(int i=0;i<nums.size();i++){
            rs=s-ls-nums[i];
            if(ls==rs){
                return i;
            }
            ls+=nums[i];
        }
        return -1;
    }
};