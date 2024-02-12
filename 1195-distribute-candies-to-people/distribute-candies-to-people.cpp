class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        int i,temp=1;
        vector<int>v(n,0);
        while(candies>0){
            if(i>=n && candies!=0){
                i=0;
            }
            if(temp<candies){
                v[i]+=temp;
                candies-=temp;
            }
            else{
                v[i]+=candies;
                return v;
            }
            i++;
            temp++;
        }
        return v;
    }
};