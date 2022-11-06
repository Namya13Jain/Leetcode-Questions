//51 N-Queens
//level:hard
class Solution {
public:

   bool isSafe(int row, int col, vector<string> &board, int n){
       int x = row, y = col;

     //check for same row
     while(y>=0){
         if(board[x][y]=='Q')
         return false;
        y--;
     }

     //check for diagonal
     x=row;
     y=col;

     //upper diagonal
     while(y>=0 && x>=0){
         if(board[x][y]=='Q')
         return false;
         x--;
         y--;
     }

     x=row;
     y=col;

     //lower diagonal
     while(x<n && y>=0){
         if(board[x][y]=='Q')
         return false;
         x++;
         y--;
     }
    return true;
   }
   void solve(int col,vector<string> &board ,vector<vector<string>> &ans,int n){
        //base case
        if(col==n) {
            ans.push_back(board);
            return ;
        }
        //solving for col 0 and rest recursion will do
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                //recursion
                solve(col+1,board,ans,n);
                //backtrack
                board[row][col]='.';
            }
        }
   }
   
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n,'.'));

        solve(0,board,ans,n);
        return ans;
    }
};

