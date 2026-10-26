class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0, dsum=0;
        for(int i:nums){
            sum+=i;
            while(i){
                dsum+=i%10;
                i/=10;
            }
        }
        return abs(sum-dsum);
    }
};