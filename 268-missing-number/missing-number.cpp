class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),s=0,c=0;
        for(int i=1;i<=n;i++){
            s+=i;
            
        }
        for(int i=0;i<n;i++){
            c+=nums[i];
        }
        return s-c;
    }
};