class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int first=0,second=1;
        while(second<nums.size()){
            if(nums[first]==0 && nums[second]==0){
                second++;
            }
            else if(nums[first]==0 && nums[second]!=0){
                swap(nums[first],nums[second]);
                first++,second++;
            }       
            else{
                first++,second++;
            }
        
        }

        for(int num:nums){
            cout<<num<<" ";
        }
    }
};