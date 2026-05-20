class Solution {
public:
    int dfs(vector<vector<int>>& grid, int n,int m,int i,int j,vector<vector<bool>>& v){
        if(i<0 || j<0 || i>=n || j>=m || v[i][j] || grid[i][j]==0) return 0;
        v[i][j] = true;
        int c=1;
        c+=dfs(grid,n,m,i-1,j,v);
        c+=dfs(grid,n,m,i,j-1,v);
        c+=dfs(grid,n,m,i,j+1,v);
        c+=dfs(grid,n,m,i+1,j,v);
        return c;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> v(n,vector<bool>(m,false));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!v[i][j] && grid[i][j]!=0){
                    cnt= max(cnt,dfs(grid,n,m,i,j,v));
                }
            }
        }
        return cnt;
    }
};
