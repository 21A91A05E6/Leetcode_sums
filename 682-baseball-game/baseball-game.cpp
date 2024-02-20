// class Solution {
// public:
//     int calPoints(vector<string>& o) {
//         // stack<int>st;
//         // int x;
//         // string a;
//         // for(int i=0;i<o.size();i++){
//         //     if(o[i]=="C"){
//         //         st.pop();
//         //     }
//         //     else if(o[i]=="D"){
//         //         a=st.top();
//         //         x=stoi(a);
//         //         x=x*2;
//         //         st.push(x);
//         //     }
//         //     int s=0,y;
//         //     else if(o[i]=="+"){
//         //         a=st.top();
//         //         x=stoi(a);
//         //         s+=x;
//         //         st.pop();
//         //         a=st.top();
//         //         y=stoi(a);
//         //         s+=y;
//         //         st.push(x);
//         //         st.push(y);
//         //         st.push(s);
//         //     }
//         //     else{
//         //         a=st.top();
//         //         x=stoi(a);
//         //         st.push(x);
//         //     }
//         // }
//         // int z=0,b;
//         // while(!st.empty()){
//         //     a=st.top();
//         //     z+=a;
//         // }
//         // return z;

        
//     }
// };

class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int> st;
        int totalSum = 0;

        for (const string& op : o) {
            if (op == "C") {
                if (!st.empty()) {
                    totalSum -= st.top();
                    st.pop();
                }
            } else if (op == "D") {
                if (!st.empty()) {
                    int doubledScore = st.top() * 2;
                    totalSum += doubledScore;
                    st.push(doubledScore);
                }
            } else if (op == "+") {
                if (st.size() >= 2) {
                    int top1 = st.top();
                    st.pop();
                    int top2 = st.top();
                    st.push(top1);
                    int sum = top1 + top2;
                    totalSum += sum;
                    st.push(sum);
                }
            } else { // Integer
                int score = stoi(op);
                totalSum += score;
                st.push(score);
            }
        }

        return totalSum;
    }
};
