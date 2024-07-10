class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c=0;
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="../"){
                c-=1;
                if(c<0){
                    c=0;
                }
            }
            else if(logs[i]=="./"){
                continue;
            }
            else{
                c+=1;
                
            }
        }
        if(c<0){
            return 0;
        }
        return c;
    }
};