class Solution {
public:
    int addDigits(int num) {
        if(num<10) return num;
        int cp=0;
        while (num){
            cp += num%10;
            num/=10;
        }
        return addDigits(cp);
    }
};