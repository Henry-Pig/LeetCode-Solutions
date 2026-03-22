class Solution {
public:
    int m,n;
    bool vis[15][15];
    bool check(int x,int y)
    {
        if(x>=0&&x<m&&y>=0&&y<n&&!vis[x][y]) return true;
        else return false;
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int x=0,y=-1;
        memset(vis,0,sizeof(vis));
        m=matrix.size();
        n=matrix[0].size();
        vector<int>ans;
        int cnt=0;
        while(1)
        {
            while(check(x,y+1))//可以往右走
            {
                cnt++;
                y++;
                vis[x][y]=true;
                ans.push_back(matrix[x][y]);
            }
            while(check(x+1,y))//可以往下走
            {
                cnt++;
                x++;
                vis[x][y]=true;
                ans.push_back(matrix[x][y]);
            }
            while(check(x,y-1))//可以往左走
            {
                cnt++;
                y--;
                vis[x][y]=true;
                ans.push_back(matrix[x][y]);
            }
            while(check(x-1,y))//可以往上走
            {
                cnt++;
                x--;
                vis[x][y]=true;
                ans.push_back(matrix[x][y]);
            }
            if(cnt==m*n) break;
        }
        return ans;
    }
};