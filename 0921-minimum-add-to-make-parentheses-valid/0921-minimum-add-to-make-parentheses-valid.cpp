class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int cnt=0;
        for(auto i:s){
            if(i=='(') st.push(i);
            else{
                if(i == ')' && !st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                    st.push(i);
                    cnt++;
                }
            }
        }
        while(!st.empty()){
            if(st.top()=='(') cnt++;
            st.pop();
        }
        return cnt;
    }
};