class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                major = nums[i];
            }
            if(nums[i]==major) cnt++;
            else cnt--;
        }
        cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==major){
                cnt++;
            }
        }
        if (cnt>nums.size()/2){
                return major;
        }
        return -1;
    }
};