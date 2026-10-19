class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int index=0, cnt=0;
        for(int i:nums) {
            if(i==target) cnt++;
            if(i<target) index++;
        }
        for(int i=0;i<cnt;i++){
            ans.push_back(i+index);
        }
        return ans;
    }
};