class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9,vector<int>(10,-1));
        vector<vector<int>> col(9,vector<int>(10,-1));
        vector<vector<int>> box(9,vector<int>(10,-1));

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                int n=board[i][j]-'0';
                int bx = (i/3)*3 + (j/3);
                if(row[i][n]!=-1 || col[j][n]!=-1 || box[bx][n]!=-1) return false;
                else{
                    row[i][n]=1;
                    col[j][n]=1;
                    box[bx][n]=1;
                }
            }
        }
        return true;
    }
};
