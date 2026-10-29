class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        for(int i:nums){
            if(i>9) sum+=i;
            else sum-=i;
        }
        return sum;
    }
};