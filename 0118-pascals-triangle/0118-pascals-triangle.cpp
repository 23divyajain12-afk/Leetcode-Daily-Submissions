class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans={};
        for (int r = 0; r < numRows; r++)
        {
            int res=1;
            vector<int> row ={};
            row.emplace_back(res);
            for(int c=0;c<r;c++){
                res = res*(r-c)/(c+1);
                row.emplace_back(res);
            }
            ans.emplace_back(row);
        }
        return ans;
    }
};