class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high = nums.size()-1;
    int lb = nums.size();
    while(low<=high){
        int mid = low + (high-low)/2;
        
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            lb = min(mid, lb);
            high = mid-1;
        } 
        else{
            low=mid+1;
        }
    }
    return lb;
    }
};