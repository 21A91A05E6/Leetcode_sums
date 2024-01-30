class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>st;
        for(int i=0;i<t.size();i++){
            if(t[i]!="+" && t[i]!="*" && t[i]!="-" && t[i]!="/"){
                st.push(stoi(t[i]));

            }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(t[i]=="+"){
                    st.push(a+b);
                }
                else if(t[i]=="*"){
                    st.push(a*b);
                }
                else if(t[i]=="/"){
                    st.push(b/a);
                }
                else{
                    st.push(b-a);
                }
            }
        }
        return st.top();
    }
};