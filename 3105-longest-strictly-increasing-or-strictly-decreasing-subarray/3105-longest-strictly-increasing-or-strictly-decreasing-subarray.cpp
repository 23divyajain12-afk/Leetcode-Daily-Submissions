class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res = 0, n = nums.size();
        if(n==1) return 1;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]) cnt++;
            else{
                res = max(cnt, res);
                cnt=1;
            }
        }
        res = max(cnt, res);
        cnt=1;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]) cnt++;
            else{
                res = max(cnt, res);
                cnt=1;
            }
        }
        res = max(cnt, res);
        return res;
    }
};