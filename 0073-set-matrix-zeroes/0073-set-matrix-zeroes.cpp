class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        const int rnum=matrix.size();
        const int cnum=matrix[0].size();
        bool row020=false,col020=false;
        for(int i=0;i<cnum;i++)
        {
            if(matrix[0][i]==0) row020=true;
        }
        for(int i=0;i<rnum;i++)
        {
            if(matrix[i][0]==0) col020=true;
        }

        for(int i=1;i<rnum;i++)
        {
            for(int j=1;j<cnum;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<rnum;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=1;j<cnum;j++) matrix[i][j]=0;
            }
        }
        for(int i=1;i<cnum;i++)
        {
            if(matrix[0][i]==0)
            {
                for(int j=1;j<rnum;j++) matrix[j][i]=0;
            }
        }
        if(row020)
            for(int i=0;i<cnum;i++) matrix[0][i]=0;
        if(col020)
            for(int i=0;i<rnum;i++) matrix[i][0]=0;
    }
};