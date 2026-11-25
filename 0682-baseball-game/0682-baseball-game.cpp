class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> hash;
        for (auto i : operations) {
            if (i == "+") {
                int x = hash.top();
                hash.pop();
                int res = x + hash.top();
                hash.push(x);
                hash.push(res);
            } else if (i == "C") hash.pop();
            else if (i == "D") {
                int res = 2 * hash.top();
                hash.push(res);
            } else hash.push(stoi(i));
        }
        int ans = 0;
        while (!hash.empty()){
            ans += hash.top();
            hash.pop();
        }
        return ans;
    }
};