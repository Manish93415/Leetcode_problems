class Solution {
public:
    void find(vector<int> &nums,set<vector<int>> &ans, vector<int> &temp, int i){
        if(i==nums.size()){
            ans.insert(temp);
            return;
        }

        //include
        temp.push_back(nums[i]);
        find(nums,ans,temp,i+1);

        // backtrack
        temp.pop_back();

        //exclude
        find(nums,ans,temp,i+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        set<vector<int>>fake;
        vector<int> temp;
        int i=0;
        find(nums,fake,temp,i);
        vector<vector<int>> ans(fake.begin(), fake.end());
        return ans;
    }
};