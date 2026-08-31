class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        vector<int> ans={};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(auto i:hash){
            if(i.second>nums.size()/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};