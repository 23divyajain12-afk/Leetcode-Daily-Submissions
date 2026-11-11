class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        int diff = need1 - need2;
        long long ans =0;
        if(diff==0){
            ans = 1LL*need1*min(costBoth, (cost1+cost2));
            return ans;
        }
        if(diff>0){
            ans = 1LL*need2*min(costBoth, (cost1+cost2));
            ans += 1LL*diff*min(costBoth, cost1);
            return ans;
        }
        if(diff<0){
            ans = 1LL*need1*min(costBoth, (cost1+cost2));
            ans += 1LL*(-1)*diff*min(costBoth, cost2);
            return ans;
        }
        return 0;
    }
};