class Solution {
public:
    int countDigits(int num) {
        int cnt=0, cp =num;
        while(cp){
            int digit = cp%10;
            cnt+= !(num%digit);
            cp/=10;
        }
        return cnt;
    }
};