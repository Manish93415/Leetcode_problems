class Solution {
public:
    void find(vector<int>& nums, vector<int>& temp,
              vector<vector<int>>& ans, int i)
    {
        if(i == nums.size())
        {
            ans.push_back(temp);
            return;
        }

        // Include
        temp.push_back(nums[i]);
        find(nums, temp, ans, i + 1);

        // Backtrack
        temp.pop_back();

        // Exclude
        find(nums, temp, ans, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; // stores all subsets 
        vector<int> temp;  // stores current subsets

        find(nums, temp, ans, 0);

        return ans;
    }
};