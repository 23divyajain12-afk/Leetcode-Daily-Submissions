class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set <int> hash(nums.begin(), nums.end());
        int i=1;
        while(hash.count(i)) i++;
        return i;
    }
};