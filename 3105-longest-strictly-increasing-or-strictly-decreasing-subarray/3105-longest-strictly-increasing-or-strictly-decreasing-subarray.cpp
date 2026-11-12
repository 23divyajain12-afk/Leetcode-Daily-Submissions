class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res = 0, n = nums.size();
        int inc=1, dec=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]) inc++, res = max(res, dec), dec=1;
            else if(nums[i]<nums[i-1]) dec++, res = max(res, inc), inc=1;
            else{
                res = max(res, dec);
                res = max(res, inc);
                inc=1,dec=1;
            }
        }
        res = max(res, dec);
        res = max(res, inc);
        return res;
    }
};