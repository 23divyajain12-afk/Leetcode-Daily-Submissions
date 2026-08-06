class Solution {
public:
    void sortColors(vector<int>& nums) {
    int arr[3] = {0};
    for (int i = 0; i < nums.size(); i++)
    {
        arr[nums[i]]++;
    }
    for (int i = 0; i < arr[0]; i++)
    {
        nums[i]=0;
    }
    for (int i = arr[0]; i < arr[0]+arr[1]; i++)
    {
        nums[i] =1;
    }
    for (int i = arr[0]+arr[1]; i < arr[0]+arr[1]+arr[2]; i++)
    {
        nums[i] = 2;
    }
    }
};