class Solution {
public:
    void find(vector<int> &nums,vector<vector<int>> &ans,vector<int> &temp, int index)
    {   
        if(index==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        find(nums,ans,temp,index+1);
        temp.pop_back();

        int i=index+1;
        while(i<nums.size() && nums[i]==nums[i-1]){
            i++;
        }
        find(nums,ans,temp,i);
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        // set<vector<int>>fake;
        vector<vector<int>> ans;
        vector<int> temp;
        int i=0;
        find(nums,ans,temp,i);
        
        return ans;
    }
};