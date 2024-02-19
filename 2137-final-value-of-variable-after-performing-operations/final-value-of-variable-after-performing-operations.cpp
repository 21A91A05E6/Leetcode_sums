class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int n=o.size();
        int c=0;
        for(int i=0;i<n;i++){
            string s=o[i];
            if(s[1]=='+'){
                c++;
            }
            else if(s[1]=='-'){
                c--;
            }
        }
        return c;
    }
};