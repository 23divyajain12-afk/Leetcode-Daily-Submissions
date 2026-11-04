class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()) return -1;
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            bool flag = true;
            for (int j = 0; j < needle.length(); j++) {
                if (needle[j] != haystack[i + j])
                    flag = false;
            }
            if (flag)
                return i;
        }
        return -1;
    }
};