class Solution {
public:

    bool isSafe(int row, int col, vector<string> &board, int n)
    {
        int x=row;
        int y=col;
        
        // check for same row
        while(y>=0)
        {
            if(board[x][y]=='Q')
            {
                return false;
            }
            y--;
        }
        
        x=row;
        y=col;
        
        // check for upper diagonaal
        while(x>=0 && y>=0)
        {
            if(board[x][y]=='Q')
            {
                return false;
            }
            x--;
            y--;
        }
        
        x=row;
        y=col;
        
        // check for lower diagonaal
        while(x<n && y>=0)
        {
            if(board[x][y]=='Q')
            {
                return false;
            }
            x++;
            y--;
        }
        
        return true;
    }

    void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n)
    {
        // base case
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        // solve 1 case and rest recursion will handle
        for(int row=0;row<n;row++)
        {
            if(isSafe(row, col, board, n))
            {
                // put queen on board
                board[row][col]='Q';
                solve(col+1, ans, board, n);
                
                // backtrack
                board[row][col]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;
        
        solve(0, ans, board, n);
        
        return ans;
    }
};