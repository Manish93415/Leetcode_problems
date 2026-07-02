class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>freq;
        for(auto num:nums) freq[num]++;
        vector<int> ans;

    
        for (auto it : freq) {
            for (int i = 0; i < it.second; i++) {
                ans.push_back(it.first);
             }
        }
        nums=ans;

        for (int x : nums)
            cout << x << " ";
    }
    
};