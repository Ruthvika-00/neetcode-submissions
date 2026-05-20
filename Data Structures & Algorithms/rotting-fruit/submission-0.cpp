class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int f = 0, t=0;
        int n= grid.size();
        int m= grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) f++;
                if(grid[i][j]==2) q.push({i,j});
            }
        }
        while(!q.empty() && f>0){
            t++;
            for(int sz=q.size();sz--;){
                auto [i,j] = q.front();
                q.pop();
                vector<pair<int,int>> dir = {{-1,0},{0,-1},{0,1},{1,0}};
                for(auto [dr,dc] : dir){
                    int ni= dr+i, nj= dc+j;
                    if(ni>=0 && nj>=0 && ni<n && nj<m && grid[ni][nj]==1){
                        grid[ni][nj]=2;
                        q.push({ni,nj});
                        f--;
                    }
                }
            }
        }
        return f==0?t:-1;   
    }
    
};
