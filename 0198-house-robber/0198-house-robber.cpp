class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        if(nums.size()==1) return nums[0];
        else dp[0]= nums[0], dp[1]=max(dp[0], nums[1]);
        for(int i=2;i<nums.size();i++){
            dp[i] = max(dp[i-2]+ nums[i], dp[i-1]);
        }
        return max(dp[nums.size()-1], dp[nums.size()-2]);     
    }
};