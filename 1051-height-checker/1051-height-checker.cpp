class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> cp = heights;
        int ans=0;
        sort(cp.begin(), cp.end());
        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=cp[i]) ans++;
        }
        return ans;
    }
};