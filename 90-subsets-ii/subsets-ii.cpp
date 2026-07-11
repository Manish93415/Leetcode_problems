class Solution {
public:
    void find(vector<int> &nums,vector<vector<int>> &ans,vector<int> &temp, int index)
    {   
        if(index==nums.size()){
            ans.push_back(temp);
            return;
        }
        // include
        temp.push_back(nums[index]);
        find(nums,ans,temp,index+1);
        // backtrack
        temp.pop_back();

        // exclude
        int i=index+1;
        while(i<nums.size() && nums[i]==nums[i-1]){  // check dupplicates
            i++;
        }
        find(nums,ans,temp,i);
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> ans;  //store all subsets
        vector<int> temp;         //store subset
        int i=0;
        find(nums,ans,temp,i);
        
        return ans;
    }
};