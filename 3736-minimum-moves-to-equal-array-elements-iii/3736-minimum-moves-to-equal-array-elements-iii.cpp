class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = nums[0], res =0;
        for(int i=0;i<nums.size();i++) if(nums[i]>m) m = nums[i];
        for(int i=0;i<nums.size();i++) res+=(m-nums[i]);
        return res;
    }
};