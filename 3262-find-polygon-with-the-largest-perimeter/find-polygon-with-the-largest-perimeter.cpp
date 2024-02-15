class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return -1;
        }
        sort(nums.begin(),nums.end());
        
        long long s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        if(n==3){
            int a=s;
            if(s-nums[n-1]>nums[n-1]){
                return a;
            }
            else{
                return -1;
            }
        }
        long long b=s;
        for(int i=n-1;i>=0;i--){
            
            s=s-nums[i];
            if(s>nums[i]){
                return b;
            }
            b=s;
        }
        return -1;
    }
};