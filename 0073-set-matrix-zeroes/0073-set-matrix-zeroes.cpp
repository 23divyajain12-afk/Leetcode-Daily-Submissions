class Solution {
public:
    void row_0(vector<vector<int>> &matrix, int j){
        for (int i = 0; i < matrix[0].size(); i++)
        {
            matrix[j][i]=0;
        }
        return;
    }
    void col_0(vector<vector<int>> &matrix, int j){
        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][j]=0;
        }
        return;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> row(r, 0);
        vector<int> col(c,0);

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            if(row[i]==1){
                row_0(matrix, i);
            }
        }
        for (int i = 0; i < c; i++)
        {
            if(col[i]==1){
                col_0(matrix, i);
            }
        }
        return;
    }
};