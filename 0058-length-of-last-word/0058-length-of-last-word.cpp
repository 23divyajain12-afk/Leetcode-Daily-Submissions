class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0, last = cnt;
        for(auto i:s){
           if(i!=' ') cnt++, last = cnt;
           else cnt = 0; 
        }
        return last;
    }
};