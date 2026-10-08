class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cntr=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
               cntr++; 
               if(cntr>1) ans.push_back(s[i]);
            } 
            else{
                cntr--;
                if(cntr>0) ans.push_back(s[i]);
            }
        }
        return ans;
    }
};