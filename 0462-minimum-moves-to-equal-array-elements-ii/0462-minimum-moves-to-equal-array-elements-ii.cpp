class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long ans=0;
            int t = nums[nums.size()/2];
            for(int i:nums) ans+=abs(i-t);
            return ans;
        
    }
};