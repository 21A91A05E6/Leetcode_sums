class Solution {
public:
void f(int ind,vector<int>& c, int t,vector<vector<int>> &ans,vector<int>&ds){
    if(t==0){
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<c.size();i++){
        if(i>ind && c[i]==c[i-1]){continue;}
        if(c[i]>t) break;
        ds.push_back(c[i]);
        f(i+1,c,t-c[i],ans,ds);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<vector<int>> ans;
        vector<int>ds;
        sort(c.begin(),c.end());
        f(0,c,t,ans,ds);
        return ans;
    }
};