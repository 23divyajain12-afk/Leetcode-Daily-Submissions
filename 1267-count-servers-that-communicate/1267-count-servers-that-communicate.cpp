class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int cnt=0;
        for(int i=0;i<m;i++){
            int cur=0, temp=-1;
            for(int j=0;j<n;j++){
                cur+= grid[i][j];
                if(grid[i][j]==1) temp = j;
            }
            if(cur>=2 || cur==0) cnt+=cur;
            else{
                for(int j=0; j<m;j++) cur+= grid[j][temp];
                if(cur>2) cnt++;
            }
        }
        return cnt;
    }
};