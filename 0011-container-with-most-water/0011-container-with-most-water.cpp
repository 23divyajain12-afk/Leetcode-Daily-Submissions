class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0, high = height.size()-1;
        int maxi =0;
        while(low<=high){
            maxi = max(maxi, ((high - low)*min(height[high], height[low])));
            if(height[low]<=height[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return maxi;
    }
};