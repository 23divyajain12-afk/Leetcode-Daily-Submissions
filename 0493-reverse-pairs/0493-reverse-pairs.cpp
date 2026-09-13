class Solution {
public:
    int merge(vector<int>& nums, int low, int mid, int high){
    int cnt=0;
    int i=low, j=mid+1;
    for (int t = low; t <= mid; t++)
    {
        while(j<=high && (long long)nums[t]>2LL*nums[j]){
            j++;
        }
        cnt+=j-(mid+1);
    }
    i=low, j=mid+1;
    vector<int> temp(high - low + 1);
    int k=0;
    while(i<=mid && j<=high){
        if(nums[i]<=nums[j]) temp[k]=nums[i], i++, k++;
        else temp[k]=nums[j], j++, k++;
    }
    while(i<=mid) temp[k]=nums[i], i++, k++;
    while(j<=high) temp[k]=nums[j], j++, k++;
    for(i=low; i<=high; i++) nums[i] = temp[i-low];
    return cnt;
}

int ms(vector<int>& nums, int low, int high){
    int count=0;
    if(low<high){
        int mid= low + (high-low)/2;
        count+=ms(nums, low, mid);
        count+=ms(nums, mid+1, high);
        count+= merge(nums, low, mid, high);
    }
    return count;
}
    int reversePairs(vector<int>& nums) {
        return ms(nums, 0, nums.size()-1);
    }
};