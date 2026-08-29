class Solution {
public:
    bool validate(vector<vector<char>> &board, char val, int row, int col) {
        for(int i = 0; i < 9; i++) {
            if(row != i && board[i][col] == val) return false;
            if(col != i && board[row][i] == val) return false;

            int gridRow = 3 * (row / 3) + i / 3;
            int gridCol = 3 * (col / 3) + i % 3;

            if ((gridRow != row || gridCol != col) && board[gridRow][gridCol] == val) {
                return false;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        // Just scan the board and validate digits that are already there
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    // If a number breaks a rule, return false immediately
                    if(!validate(board, board[i][j], i, j)) {
                        return false;
                    }
                }
            }
        }
        return true; // If no rules are broken, the board is valid!
    }
};
