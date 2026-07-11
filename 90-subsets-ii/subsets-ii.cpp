class Solution {
public:
    void find(vector<int> &nums,
          vector<vector<int>> &ans,
          vector<int> &temp,
          int index)
{
    ans.push_back(temp);

    for(int i = index; i < nums.size(); i++)
    {
        if(i > index && nums[i] == nums[i-1])
            continue;

        temp.push_back(nums[i]);

        find(nums, ans, temp, i + 1);

        temp.pop_back();
    }
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