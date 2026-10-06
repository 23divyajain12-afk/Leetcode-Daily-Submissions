class Solution {
public:
    int digit_sum_sq(int cp){
        int sum=0;
        while(cp!=0){
            sum += (cp%10)*(cp%10);
            cp = cp/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n, fast = digit_sum_sq(n);
        while(fast!=1 && slow != fast){
            slow = digit_sum_sq(slow);
            fast = digit_sum_sq(digit_sum_sq(fast));
        }
        return (fast==1);
    }
};