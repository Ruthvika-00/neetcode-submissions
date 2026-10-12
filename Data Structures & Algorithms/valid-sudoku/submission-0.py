class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row=[[-1]*10 for _ in range(9)]
        col=[[-1]*10 for _ in range(9)]
        box=[[-1]*10 for _ in range(9)]
        for i in range(9):
            for j in range(9):
                if board[i][j]==".":
                    continue
                num=int(board[i][j])
                bx=(i//3)*3 + (j//3)

                if(row[i][num]!=-1 or col[j][num]!=-1 or box[bx][num]!=-1):
                    return False
                else:
                    row[i][num]=1
                    col[j][num]=1
                    box[bx][num]=1
        return True