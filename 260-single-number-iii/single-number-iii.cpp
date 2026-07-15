class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>freq;
        vector<int>ans;
        for(auto num:nums){
            freq[num]++;
        }

        for(auto it:freq){
            if(it.second==1)  ans.push_back(it.first);
        }
        return ans;
    }
};