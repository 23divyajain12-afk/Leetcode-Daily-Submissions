class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> hash;
        for(int i=0; i<nums.size();i++){
            int rem = target - nums[i];
            if(hash.find(rem)!=hash.end()){
                return {i, hash[rem]};
            }
            hash[nums[i]] = i;
        }
        return {-1,-1};
    }
};