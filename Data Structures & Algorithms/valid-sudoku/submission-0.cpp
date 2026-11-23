class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    continue;
                }

                int n = board[i][j] - '1';
                int boxIndex = (i/3)*3 + (j/3);
                if(rows[i][n] || cols[j][n] || boxes[boxIndex][n]){
                    return false;
                }
                rows[i][n] = cols[j][n] = boxes[boxIndex][n] = true;
            }
        }
        return true;
    }

};
