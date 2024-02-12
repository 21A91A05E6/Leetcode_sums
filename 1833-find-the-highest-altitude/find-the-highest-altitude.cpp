class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,b=0;
        for(int i=0;i<gain.size();i++){
            
            a+=gain[i];
            if(a>b){
                b=a;
            }
        }
        return b;
    }
};