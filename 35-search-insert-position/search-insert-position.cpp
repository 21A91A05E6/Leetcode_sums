class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==t){
                return i;
            }
            if(nums[i]>t){
                c=1;
                return i;
            }
        }
        if(c==0){
            if(nums[0]>t){
                return 0;
            }
            else if(nums[n-1]<t){
                return n;
            }
        }
        return 0;
    }
};