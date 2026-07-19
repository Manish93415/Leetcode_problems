class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        mp[0] = 1;          // Empty prefix sum

        int prefix = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            // Update current prefix sum
            prefix += nums[i];

            // Check if there exists a previous prefix sum such that currentPrefix - previousPrefix = k
            if (mp.find(prefix - k) != mp.end()) {
                count += mp[prefix - k];
            }

            // Store current prefix sum
            mp[prefix]++;
        }

        return count;
    }
};