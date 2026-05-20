class Solution {
public:
    int dfs(vector<vector<int>>& grid, int n,int m,int i,int j){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0) return 0;
        grid[i][j]=0;
        int c=1;
        vector<pair<int,int>> dir = {{-1,0},{0,-1},{0,1},{1,0}};
        for(const auto& [dr,dc] : dir){
            c+=dfs(grid,n,m,i+dr,j+dc);
        }
        return c;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> v(n,vector<bool>(m,false));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    cnt= max(cnt,dfs(grid,n,m,i,j));
                }
            }
        }
        return cnt;
    }
};
