class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;
        while (n > 0) {
            int digit = n % 10;
            nums.push_back(digit);
            n /= 10;
        }

       sort(nums.begin(), nums.end());

        int num = nums.size();

        int case1 = nums[num-1] * nums[num-2] ;
        return case1;
    }
};