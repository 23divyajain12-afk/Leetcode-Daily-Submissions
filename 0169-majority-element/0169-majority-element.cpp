class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> hash;
        for(int i:nums){
            hash[i]++;
        }
        for(auto i:hash){
            if(i.second>nums.size()/2){
                return i.first;
            }
        }
        return -1;
    }
};