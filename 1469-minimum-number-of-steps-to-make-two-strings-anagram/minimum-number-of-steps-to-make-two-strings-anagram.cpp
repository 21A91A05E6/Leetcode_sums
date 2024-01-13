class Solution {
public:
    int minSteps(string s, string t) {
        map <char,int> m1;
       
        for(auto it:s){
            m1[it]++;
        }
        for(auto it:t){
            m1[it]--;
        }
        int c=0;
        for(auto it:m1){
            if(it.second>0){
                c+=it.second;
            }
        }
        return c;

    }
};