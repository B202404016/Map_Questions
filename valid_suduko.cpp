class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            vector<vector<int>>r(9,vector<int>(9,0));
            vector<vector<int>>c(9,vector<int>(9,0));
            vector<vector<int>>g(9,vector<int>(9,0));
            for(int i=0;i<board.size();i++)
            {
                for(int j=0;j<board[0].size();j++)
                {
                    if(board[i][j]!='.')
                    {
    
                    
                    int n=board[i][j]-'0';
                    int k=(i/3)*3  +j/3;
    
    
                    if(r[i][n-1]++  || c[j][n-1]++  ||  g[k][n-1]++)
                    {
                        return false;
                    }
                    }
                }
            }
            return true;
            
        }
    };
