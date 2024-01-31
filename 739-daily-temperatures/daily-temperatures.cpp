class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n = nums.size();
      vector < int > nge(n, 0);
      stack < int > st;
      for (int i=0;i<n;i++) {
        while (!st.empty() && nums[st.top()] < nums[i]) {
            int in=st.top();
          st.pop();
          nge[in]=i-in;
        }
        st.push(i);
      }
      return nge;
    }
};