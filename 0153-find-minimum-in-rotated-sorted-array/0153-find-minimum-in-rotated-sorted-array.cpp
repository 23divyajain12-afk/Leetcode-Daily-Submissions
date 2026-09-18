class Solution {
public:
    int findMin(vector<int>& nums) {
        int low =0, high = nums.size()-1;
    int res = INT_MAX;
    while(low<=high){
        int mid = low + (high-low)/2;
        res = min(nums[mid], res);
        if(nums[high]>=nums[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return res;
    }
};