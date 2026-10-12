class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                int bx = (i/3)*3 + (j/3);
                char n=board[i][j];
                if(row[i].contains(n) || col[j].contains(n) || box[bx].contains(n)) return false;
                row[i].insert(n);
                col[j].insert(n);
                box[bx].insert(n);
            }
        }
        return true;
    }
};
