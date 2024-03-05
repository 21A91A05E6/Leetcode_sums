class Solution {
public:
    int minimumLength(string s) {
        // int n=s.size();
        // for(int i=0;i<n/2;i++){
        //     if(s[i]==s[n-i-1]){
        //         // s.remove(s[i]);
        //         char c=s[i];
        //         s.erase(std::remove(s.begin(), s.end(), c), s.end());
        //     }
        // }
        // return s.size();
        int n = s.size();
        int l = 0, r = n - 1;
        while (l < r && s[l] == s[r]) {
            char c = s[l];
            while (l <= r && s[l] == c) l++;
            while (l <= r && s[r] == c) r--;
        }
        return max(0, r - l + 1);
    }
};