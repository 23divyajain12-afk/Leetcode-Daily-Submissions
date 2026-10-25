class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto i:words){
            string j = i;
            reverse(i.begin(), i.end());
            if(i == j) return i;
        } 
        return "";
    }
};