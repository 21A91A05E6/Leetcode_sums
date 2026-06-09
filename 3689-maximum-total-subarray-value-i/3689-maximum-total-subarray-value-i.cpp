class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mini = nums[0];
        int maxi = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < mini) mini = nums[i];
            if(nums[i] > maxi) maxi = nums[i];
        }

        return (long long)(maxi - mini) * k;
    }
};