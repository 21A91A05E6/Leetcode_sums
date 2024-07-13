class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m=0,n=nums.size();
        if(n==1) return true;
        for(int i=0;i<n;i++){
            if(i>m) return false;
            m=max(m,nums[i]+i);
            if(m>=n-1) return true;
        }
        
        return false;
    }
};