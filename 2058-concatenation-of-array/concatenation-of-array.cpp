class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(2*n,0);
        // v.push_back(nums);
        for(int i=0;i<n;i++){
            v[i]=nums[i];
            v[i+n]=nums[i];
        }
        
        return v;
    }
};