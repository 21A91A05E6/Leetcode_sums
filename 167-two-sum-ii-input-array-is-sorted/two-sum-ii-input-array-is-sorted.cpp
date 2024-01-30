class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int i=0,j=num.size()-1;
        vector<int>v;
        while(i<j){
            if(num[i]+num[j]>t){
                j--;
            }
            else if(num[i]+num[j]<t){
                i++;
            }
            else if(num[i]+num[j]==t){
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
        }
        return v;
    }
};