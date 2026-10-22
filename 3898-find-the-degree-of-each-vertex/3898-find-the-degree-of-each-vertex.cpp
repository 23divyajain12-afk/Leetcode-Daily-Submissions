class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            int ans=0;
            for(int j=0;j<n;j++){
                ans+=matrix[i][j];
            }
            res.push_back(ans);
        }
        return res;
    }
};