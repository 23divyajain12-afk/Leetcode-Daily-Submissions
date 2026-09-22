class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char i : s) {
            if (i == '(' || i == '[' || i == '{') {
                st.push(i);
            } else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                if ((top == '(' && i == ')') || (top == '[' && i == ']') ||
                    (top == '{' && i == '}')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};