class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        char board[3][3];
        memset(board,0,sizeof(board));
        for(int i=0;i<moves.size();i+=2) board[moves[i][0]][moves[i][1]]='A';
        for(int i=1;i<moves.size();i+=2) board[moves[i][0]][moves[i][1]]='B';
        for(int i=0;i<3;i++)
        {
            if(board[i][0]&&board[i][0]==board[i][1]&&board[i][1]==board[i][2]) return string(1,board[i][0]);
            if(board[0][i]&&board[0][i]==board[1][i]&&board[1][i]==board[2][i]) return string(1,board[0][i]);
        }
        if(board[0][0]&&board[0][0]==board[1][1]&&board[1][1]==board[2][2]) return string(1,board[0][0]);
        if(board[0][2]&&board[0][2]==board[1][1]&&board[1][1]==board[2][0]) return string(1,board[2][0]);
        if(moves.size()==9) return "Draw";
        else return "Pending";
    }
};