class Solution {
public:
    bool valid(int x,int y,vector<vector<int>>&board){
        return (x>=0&&x<board.size()&&y>=0&&y<board[0].size());
    }
    void gameOfLife(vector<vector<int>>& board) {
       vector<int> ways_row = {0, 0, 1, 1, 1, -1, -1, -1};
        vector<int> ways_col = {1, -1, 1, -1, 0, 0, 1, -1};
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int live=0;
                for(int k=0;k<8;k++){
                    int cur_row=i+ways_row[k];
                    int cur_col=j+ways_col[k];
                    if(valid(cur_row,cur_col,board)==true&&abs(board[cur_row][cur_col])==1){
                        live++;
                    }
                }
                    //indicates a cell that was live but now is dead.
                    if(board[i][j]==1&&(live<2||live>3)){
                        board[i][j]=-1;
                    }
                    //indicates a cell that was dead but now is live.
                    if(board[i][j]==0&&live==3){
                         board[i][j]=2;
                    }
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]>=1){
                    board[i][j]=1;
                }
                else{
                    board[i][j]=0;
                }
            }
        }
    }
};
