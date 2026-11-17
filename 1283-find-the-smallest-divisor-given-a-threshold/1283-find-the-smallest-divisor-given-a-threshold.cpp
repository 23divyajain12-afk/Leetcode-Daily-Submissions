class Solution {
public:
    int dsum(vector<int>& nums, int n, int threshold) {
        int sum = 0;
        for (int i : nums) {
            sum += ceil((double)(i) / double(n));
            if (sum > threshold)
                return -1;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if (threshold < nums.size())
            return -1;
        int maxi = 0;
        for (int i : nums)
            maxi = max(maxi, i);
        int low = 1, high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (dsum(nums, mid, threshold) != (-1) && dsum(nums, mid, threshold) <= threshold)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};