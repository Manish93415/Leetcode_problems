class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int>freq;
        for(int i:nums){
            freq[i]++;
        }
        int j=0;
        vector<int>ans(2);
        for(auto it:freq){
            if(it.second==2){
                ans[j]=it.first;
                j++;
            }
        }
        return ans;
    }
};