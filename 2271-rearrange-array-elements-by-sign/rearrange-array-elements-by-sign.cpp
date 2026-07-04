class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive(nums.size()/2);
        vector<int>negative(nums.size()/2);
        int m=0,n=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                positive[n]=nums[i];
                n++;
            }

            else{
                negative[m]=nums[i];
                m++;
            }
        }
        int i=0,j=0,k=0;
        while(k<nums.size()){
            nums[k]=positive[i];
            i++,k++;
            nums[k]=negative[j];
            j++,k++;
            
        }

        return nums;
    }
};