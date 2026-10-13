class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        for(int &i:nums) i = abs(i);
        sort(nums.begin(),nums.end());
        int i=0, j=nums.size()/2;
        while(i<nums.size()/2 && j<nums.size()){
            ans-=nums[i]*nums[i], i++;
            ans+=nums[j]*nums[j], j++;
        }
        while(j<nums.size()) ans+=nums[j]*nums[j], j++;
        return ans;
    }
};