class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());

        int LIM = 1;
        while (LIM <= mx) LIM <<= 1;   

        vector<bool> pairXor(LIM, false);
        vector<bool> ans(LIM, false);

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                pairXor[nums[i] ^ nums[j]] = true;
            }
        }

        for (int x = 0; x < LIM; x++) {
            if (!pairXor[x]) continue;

            for (int num : nums) {
                ans[x ^ num] = true;
            }
        }

        int cnt = 0;
        for (bool x : ans)
            if (x) cnt++;

        return cnt;
    }
};