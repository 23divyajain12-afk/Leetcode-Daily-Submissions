class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        for(int i=0;i<nums.size();i++){
            int cur = 1;
            for(int j=i;j<nums.size();j++){
                cur *= nums[j];
                maxi = max(cur, maxi);
            }
        }
        return maxi;
    }
};