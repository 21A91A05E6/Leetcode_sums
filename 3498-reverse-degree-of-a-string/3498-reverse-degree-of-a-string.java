class Solution {
    public int reverseDegree(String s) {
        int x=0;
        for( int i=1;i<=s.length();i++){
            int ch=s.charAt(i-1);
            int c=123-ch;
            x+=c*i;
        }
        return x;
    }
}