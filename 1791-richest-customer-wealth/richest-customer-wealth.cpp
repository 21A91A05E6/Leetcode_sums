class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int s=0,s1=0,n=a.size();
        for(int i=0;i<n;i++){
            s=0;
            for(int j=0;j<a[i].size();j++){
                s+=a[i][j];
            }
            s1=max(s1,s);
        }
        return s1;
    }
};