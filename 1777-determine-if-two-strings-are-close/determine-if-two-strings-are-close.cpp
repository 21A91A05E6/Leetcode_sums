class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false;
        }
        map<char,int>m1,m2;
        for(int i=0;i<word1.size();i++){
            m1[word1[i]]++;
            m2[word2[i]]++;
        }
        for(auto it:m1){
            if(m2[it.first]==0){
                return false;
            }
        }
        vector<int>v1,v2;
        for(auto it:m1){
            v1.push_back(it.second);
        }
        for(auto it:m2){
            v2.push_back(it.second);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        if(v1 == v2)
            return true;
        else
            return false;
    }
};