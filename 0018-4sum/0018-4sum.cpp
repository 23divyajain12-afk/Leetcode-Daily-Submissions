class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i = 0;
    int n = nums.size();
    if(n<4) return {};
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    while (i < n - 3)
    {
        if(i!=0 && nums[i]==nums[i-1]){
            i++;
            continue;
        }
        int j = i + 1;
        while (j < n - 2)
        {
            if (j != i + 1 && nums[j] == nums[j - 1])
            {
                j++;
                continue;
            }
                int k = j + 1, l = n - 1;
                while (k < l)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target)
                    {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        while (k < l && nums[k] == nums[k - 1])
                        {
                            k++;
                        }
                        while (k < l && nums[l] == nums[l + 1])
                        {
                            l--;
                        }
                    }
                    else if (sum < target)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
            j++;
        }
        i++;
    }
    return ans;
    }
};