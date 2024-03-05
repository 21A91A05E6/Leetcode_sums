class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int d;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            d=nums[i]*nums[i];
            v.push_back(d);
        }
        sort(v.begin(),v.end());
        return v;
    }
};