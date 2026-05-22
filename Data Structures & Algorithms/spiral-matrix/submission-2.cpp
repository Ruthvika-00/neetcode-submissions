class Solution {
public:
    void dfs(int row,int col, int r, int c, int dr, int dc, vector<vector<int>>& mtx, vector<int>& res){
        if(row==0||col==0) return;
        for(int i=0;i<col;i++){
            r+=dr;
            c+=dc;
            res.push_back(mtx[r][c]);
        }
        dfs(col,row-1,r,c,dc,-dr,mtx,res);
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> res;
        dfs(n,m,0,-1,0,1,matrix,res);
        return res;
    }
};
