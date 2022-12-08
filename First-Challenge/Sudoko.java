class Solution {
    public boolean isValidSudoku(char[][] board) {
        for (int i = 0; i < board.length; i++) {
            HashSet<Character> rows = new HashSet<>();
            HashSet<Character> col = new HashSet<>();
            for (int j = 0; j <board[i].length ; j++) {
                if (rows.contains(board[i][j]) || col.contains(board[j][i])){
                    return false;
                }
                 if (board[i][j] != '.') {
                    rows.add(board[i][j]);
                }
                if (board[j][i] != '.'){
                    col.add(board[j][i]);
                }
            }
        }
          return checkSub(board);
    }

    public  boolean checkSub(char[][] board) {
        int sub = 0;
        while (sub < 3) {
            for (int i = 0; i < board.length; i += 3) {
                for (int j = 0; j < board[i].length; j += 3) {
                    HashSet<Character> blocks = new HashSet<>();
                    for (int k = 0; k < 3; k++) {
                        for (int l = 0; l < 3; l++) {
                            if (blocks.contains(board[k+i][l+j])) {
                                return false;
                            }
                            if (board[k+i][l+j] != '.') {
                                blocks.add(board[k+i][l+j]);
                            }
                        }
                    }
                }
                sub++;
            }
        }
        return true;
    }
}
