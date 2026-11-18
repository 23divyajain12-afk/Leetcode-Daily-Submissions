class Solution {
public:
    int minChanges(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i+=2){
            int cur = s[i]-'0'+s[i+1]-'0';
            if (cur==1) cnt++;
        }
        return cnt;
    }
};