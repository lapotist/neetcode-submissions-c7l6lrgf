class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        squares = defaultdict(list)
        cols = defaultdict(list)
        rows = defaultdict(list)
        for i in range(9):
            for j in range(9):
                if board[i][j] == '.':
                    continue 
                square = (i//3) + ((j//3)*3)
                if board[i][j] in squares [square] or board[i][j] in rows[i] or board[i][j] in cols[j]:
                    return False
                squares[square].append(board[i][j])
                cols[j].append(board[i][j])
                rows[i].append(board[i][j])
        return True
        