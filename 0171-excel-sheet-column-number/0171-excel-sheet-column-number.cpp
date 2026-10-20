class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res =0;
        for(auto i:columnTitle){
            res = (res*26) - int('A') + int(i) +1;
        }
        return res;
    }
};