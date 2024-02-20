class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int c=0,a=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i+j==n-1 || i==j){
                    c+=mat[i][j];
                }
                
                // ((n-(n/2))+1)
                // if(n%2!=0 && i==j && i==n/2 && j==n/2){
                //     a=mat[i][j];
                    
                // }
            }
        }
        return c;
    }
};