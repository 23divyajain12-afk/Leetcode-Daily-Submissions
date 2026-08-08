class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int s= nums.size();
        vector <int> ans(s,0);
        int m=0, n=1;
        for (int i = 0; i < s; i++)
        {
            if(nums[i]>0){
                ans[m] = nums[i];
                m+=2;
            }
            else{
                ans[n] = nums[i];
                n+=2;
            }
        }
        return ans;
    }
};