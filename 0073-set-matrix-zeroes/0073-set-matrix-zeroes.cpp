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
    int col0 = 1;
    // vector<int> row(r, 0); -> matrix[...][0] i.e. 0th col;
    // vector<int> col(c,0); -> matrix[0][...] i.e. 0th row;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < c; j++)
            matrix[0][j] = 0;
    }
    if (col0 == 0)
    {
        for (int i = 0; i < r; i++)
            matrix[i][0] = 0;
    }
    return;
    }
};