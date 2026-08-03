class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9), col(9), box(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                int b=(i/3)*3+j/3;
                char ch=board[i][j]-'0';
                if(row[i].count(ch)||col[j].count(ch)||box[b].count(ch)){
                    return false;
                }
                row[i].insert(ch);
                col[j].insert(ch);
                box[b].insert(ch);
            }
        }
        return true;
    }
};