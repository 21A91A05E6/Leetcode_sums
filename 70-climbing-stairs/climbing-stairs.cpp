class Solution {
public:
    int climbStairs(int n) {
        int a=1;
        int b=1;
        int t;
        for(int i=1;i<n;i++){
            t=a;//1 2
            a=a+b;//2 3
            b=t;//1
        }
        return a;
    }
};