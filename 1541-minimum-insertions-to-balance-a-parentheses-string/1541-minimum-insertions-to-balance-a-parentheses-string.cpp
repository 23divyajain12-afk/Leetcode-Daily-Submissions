class Solution {
public:
    int minInsertions(string s) {
        int open = 0, cnt = 0, ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open++;
            else{
                if(i<s.size()-1 && s[i+1]==s[i]){
                   i++; 
                } 
                else{
                    ans+=1;
                }
                if(open>0) open--;
                else ans++;
            }
        }
        ans = ans + 2*open;
        return ans;
    }
};