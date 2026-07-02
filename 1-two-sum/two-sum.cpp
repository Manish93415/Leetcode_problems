class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        vector<int>ans(2,-1);
        while(left<nums.size()-1){
            if((nums[left]+nums[right]==target)&&(left<right)){
                ans[0]=left;
                ans[1]=right;
                return ans;
            }
            else if(left<right){
                right--;
            }
            else{
                left++,right=nums.size()-1;
            }
        }
        return ans;
    }
};