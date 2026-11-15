class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int cnt = 0;
        int preSum = 0;
        int odd = 0;
        int even = 1;
        for(int i = 0; i < arr.size() ; i++){
            preSum += arr[i] % 2;

            if(preSum % 2 == 0){
                cnt += odd;
                even++;
            }else{
                cnt += even;
                odd++;
            }
            cnt %= 1000000007;
        }
        return cnt;
    }
};