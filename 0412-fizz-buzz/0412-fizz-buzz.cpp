class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        for(int i=0;i<n;i++){
            int j = i+1;
            if(j%15==0) ans[i] = "FizzBuzz";
            else if(j%3==0) ans[i] = "Fizz";
            else if(j%5==0) ans[i] = "Buzz";
            else ans[i] = to_string(j);
        }
        return ans;
    }
};