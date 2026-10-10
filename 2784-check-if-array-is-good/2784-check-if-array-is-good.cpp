class Solution {
public:
    bool isGood(vector<int>& nums) {
        // int temp = 0;
        // for(int i:nums) temp ^= i;
        // int temp1 = temp;
        // for(int i = 1; i <nums.size();i++) temp ^= i,temp1^=i;
        // temp1^=nums.size();
        // if(temp == nums.size()-1 && temp1!=0) return true;
        // return false;
        vector<int> hash(nums.size()-1, 0);
        for(int i: nums){
            if(i<1 || i>=nums.size()) return false;
            if(i-1<=hash.size()) hash[i-1]++;
        } 
        for(int i=0;i<hash.size()-1;i++){
            if(hash[i]!=1)return false;
        } 
        if(hash[hash.size()-1]!=2) return false;
        return true; 
    }
};