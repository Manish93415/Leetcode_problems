class Solution {
public:
    int maxProduct(int n) {
        vector<int>digitarr;
        while (n > 0) {
            int digit = n % 10;
            digitarr.push_back(digit);
            n /= 10;
        }

        int firstmax = *max_element(digitarr.begin(), digitarr.end());                                              auto it = find(digitarr.begin(), digitarr.end(), firstmax);

        if (it != digitarr.end()) {
            digitarr.erase(it);
        }

        int secondmax= *max_element(digitarr.begin(),digitarr.end());
        int maxmul=firstmax*secondmax;
        return maxmul;
    }
};