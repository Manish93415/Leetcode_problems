class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int>freq;
        for(int i:nums){
            freq[i]++;
        }
        vector<int>ans;
        for(auto it:freq){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};