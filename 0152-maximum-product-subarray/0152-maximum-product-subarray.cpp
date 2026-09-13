class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int pre = 1, suf = 1;
        for (int i = 0; i < nums.size(); i++) {
            pre *= nums[i];
            suf *= nums[nums.size() - i - 1];
            maxi = max(maxi, max(pre, suf));
            if (pre == 0)
                pre = 1;
            if (suf == 0)
                suf = 1;
        }
        return maxi;
    }
};