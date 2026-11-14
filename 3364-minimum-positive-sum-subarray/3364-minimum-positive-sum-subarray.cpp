class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size(), ans=INT_MAX;
        for(int i=0;i<=n-l;i++){
            int cnt=0, cur=0;
            for(int j=i;j<n;j++){
                cnt++, cur+=nums[j];
                if(cnt>r)break;
                else if(cnt>=l && cur>0) ans = min(ans, cur); 
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};