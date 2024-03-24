class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(auto it:nums){
            m[it]++;
        }
        int a;
        for(auto it:m){
            if(it.second>1){
                a=it.first;
            }
        }
        return a;
    }
};