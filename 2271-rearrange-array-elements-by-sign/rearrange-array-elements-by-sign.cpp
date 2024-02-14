class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>p;
        vector<int>q;
        vector<int>a;
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                q.push_back(nums[i]);
                c2++;
            }
            else{
                p.push_back(nums[i]);
                c1++;
            }
        }
        int c;
        if(c1<c2){
            c=c1;
        }
        else{
            c=c2;
        }
        for(int i=0;i<c;i++){
            a.push_back(p[i]);
            a.push_back(q[i]);
        }
        for(int i=c;i<c1;i++){
            a.push_back(p[i]);
        }
        for(int i=c;i<c2;i++){
            a.push_back(q[i]);
        }
        return a;
    }
};