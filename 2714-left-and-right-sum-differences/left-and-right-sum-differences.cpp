class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ls(n,0);
        vector<int>rs(n,0);
        vector<int>v;
        int a=0;
        for(int i=0;i<n;i++){
            ls[i]+=a;
            a+=nums[i];
        }
        a=0;
        for(int i=n-1;i>=0;i--){
            rs[i]+=a;
            a+=nums[i];
            
        }
        for(int i=0;i<n;i++){
            v.push_back(abs(ls[i]-rs[i]));
        }
        return v;
    }
};