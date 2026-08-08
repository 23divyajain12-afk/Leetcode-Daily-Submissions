class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int mini = prices[0];
    int profit=0;
    int n=prices.size();
    for(int i=1;i<prices.size();i++){
        mini = min(mini, prices[i-1]);
        profit = max(profit, prices[i]-mini);

    }
    return profit;
    }
};