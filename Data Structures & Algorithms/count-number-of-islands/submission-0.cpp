class Solution {
public:
    void dfs(vector<vector<char>>& grid,int n, int m, int i,int j,vector<vector<bool>>& v){
        if(i<0 || j<0 || i>=n || j>=m || v[i][j] || grid[i][j]=='0') return;
        v[i][j] = true;
        dfs(grid,n,m,i-1,j,v);
        dfs(grid,n,m,i,j-1,v);
        dfs(grid,n,m,i,j+1,v);
        dfs(grid,n,m,i+1,j,v);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> v(n,vector<bool>(m,false));
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!v[i][j] && grid[i][j]=='1'){
                    dfs(grid,n,m,i,j,v); 
                    cnt++;
                } 
            }
        }
        return cnt;
    }
};
