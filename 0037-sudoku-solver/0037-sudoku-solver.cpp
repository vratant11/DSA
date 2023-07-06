class Solution {
public:
    
    bool check(vector<vector<char>>& board,int row, int col, int num){
        //Checking that row does not have the same no.
        for(int i = 0; i<9; i++){
            if(board[i][col] == num) return false;
        }
        //Checking that col does not have the same no.
        for(int j = 0; j<9; j++){
            if(board[row][j] == num) return false;
        }
        //Checking that same no is not present in 3 X 3 matrix.
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                if(board[row-row%3+i][col-col%3+j]==num) return false;
            }
        }
        return true;
    }

//Funtion to check boundary conditions.
    bool helper(vector<vector<char>>& board, int row, int col){
        if(row == 9) return true; // Checks end of row
        if(col == 9) return helper(board,row+1,0); //checks end of col
        if(board[row][col] != '.') return helper(board,row,col+1);

        for(char c='1'; c<='9'; c++){
            if(check(board,row,col,c)){
                board[row][col] = c;      //assign value to the matrix
                if(helper(board,row,col+1)){
                    return true;
                }
            }
            board[row][col] = '.';
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }
};