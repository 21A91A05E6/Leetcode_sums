class Solution {
public:
    void f(int ind,int t,vector<int>& arr,vector<vector<int>> &ans,vector<int> &ds){
        if(ind==arr.size()){
            if(t==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=t){
            ds.push_back(arr[ind]);
            f(ind,t-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        f(ind+1,t,arr,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(0,target,candidates,ans,ds);
        return ans;
    }
};