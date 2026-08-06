class Solution {
public:
    int pro(int n){
        int prod = 1;
        while(n != 0){
            prod = prod * (n%10);
            n /= 10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        while(pro(n)%t){
            n++;
        }
        return n;
    }
};