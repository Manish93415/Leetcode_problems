class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int diff=nums.size()-k;
        vector<int>ans;
        for(int i=diff;i<nums.size();i++){
            ans.push_back(nums[i]);
        }

        for(int i=0;i<diff;i++){
            ans.push_back(nums[i]);
        }
        nums=ans;

        return nums;
    }
};