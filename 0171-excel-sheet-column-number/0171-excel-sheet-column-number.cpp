class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long res =0;
        for(auto i:columnTitle){
            res = (res*26)+ int(i) - int('A')+1;
        }
        return res;
    }
};