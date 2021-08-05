class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool st[10];
        //ö����
        for(int i=0;i<9;i++)
        {
            memset(st,false,sizeof st);
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.') 
                {
                    if(st[board[i][j]-'1']) 
                    return false;
                    st [board[i][j]-'1']=true;
                }
            }
        }
        //ö����
        for(int i=0;i<9;i++)
        {
            memset(st,false,sizeof st);
            for(int j=0;j<9;j++)
            {
                if(board[j][i]!='.') 
                {
                    if(st[board[j][i]-'1']) return false;
                    st[board[j][i]-'1'] =true;
                }
            }
        }
        //ö�ٷ��飬��Ҫ���ս��x,yƫ����
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                memset(st,false,sizeof st);
                for(int x=0;x<3;x++)
                {
                    for(int y=0;y<3;y++)
                    {
                        if(board[i+x][j+y]!='.')
                        {
                            if(st[board[i+x][j+y]-'1']) return false;
                            st[board[i+x][j+y]-'1']=true;
                        }
                    }
                }
            }
        }
        return true;
    }
};
