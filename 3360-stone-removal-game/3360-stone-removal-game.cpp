class Solution {
public:
    bool canAliceWin(int n) {
        int cnt=10;
        int turn = 1;
        while( n >= 0 ){
            n -= cnt;
            cnt--;
            turn ^= 1;
        }
        return turn;
    }
};