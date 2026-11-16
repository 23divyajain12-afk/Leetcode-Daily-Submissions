class Solution {
public:
    string digitSum(string s, int k) {
        if (s.size() <= k)
            return s;
        int n = s.size();
        string temp;
        for (int i = 0; i < n; i+=k) {
            int sum=0;
            for(int j=i;j<min(i+k, n);j++){
                sum += (s[j]-'0');
            }
            temp.append(to_string(sum));
        }
        return digitSum(temp, k);
    }
};