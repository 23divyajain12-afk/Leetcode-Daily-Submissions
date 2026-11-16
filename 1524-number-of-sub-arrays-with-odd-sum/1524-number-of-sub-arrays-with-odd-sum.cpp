class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long cnt=0, odd=0, even=1, preSum=0;
        for(int i: arr){
            preSum+= i%2;
            if(preSum%2==0){
                cnt+=odd;
                even++;
            }
            else{
                cnt+=even;
                odd++;
            }
            cnt = cnt%1000000007;
        }
        return (int)cnt;
    }
};