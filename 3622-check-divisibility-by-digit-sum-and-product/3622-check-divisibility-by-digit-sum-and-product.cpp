class Solution {
public:
    bool checkDivisibility(int n) {
    int cp = n;
    int prod =1;
    int sum=0;
    while(n!=0){
        sum = sum + n%10;
        prod = prod*(n%10);
        n/=10;
    }
    if(cp%(sum+prod)==0) return true;
    return false;
    }
};