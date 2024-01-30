class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map<int,int>m;
        // for(auto it:nums){
        //     m[it]++;
        // }
        // int n=nums.size()-1;
        // nums.clear();
        // for(auto it:m){
        //     if(it.second>2){
        //         n--;
        //         nums.push_back(it.first);
        //         nums.push_back(it.first);
        //     }
        //     else if(it.second==2){
        //         nums.push_back(it.first);
        //         nums.push_back(it.first);
        //     }
        //     else{
        //         nums.push_back(it.first);
        //     }
        // }
        // return n;
        int index = 1;
        int occurance = 1;

        for(int i=1; i < nums.size(); i++){
            if (nums[i] == nums[i-1]){
                occurance++;
            }else{
                occurance = 1;
            }

            if(occurance <= 2){
                nums[index] = nums[i];
                index++;
            }
        }

        return index;
    }
};