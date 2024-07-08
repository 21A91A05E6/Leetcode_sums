class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int ls=0,rs=0,s=0;
        for(int i=0;i<=k-1;i++){
            ls+=a[i];

        }
        s=ls;
        int rind=a.size()-1;
        for(int i=k-1;i>=0;i--){
            ls-=a[i];
            rs+=a[rind];
            rind-=1;
            s=max(s,ls+rs);
        }
        return s;
    }
};