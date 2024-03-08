class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        for(auto it:nums){
            m[it]++;
        }
        int c=0,m1=0;
        for(auto it : m) {
            m1 = max(m1, it.second);
        }
        for(auto it:m){
            if(it.second==m1){
                m1=it.second;
                c+=m1;
            }
        }
        return c;
    }
};