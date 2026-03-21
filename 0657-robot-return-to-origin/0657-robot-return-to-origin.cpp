class Solution {
public:
    bool judgeCircle(string moves) {
        int cntud=0,cntlr=0;
        for(int i=0;i<moves.size();i++)
        {
            switch(moves[i])
            {
                case 'U':cntud++;break;
                case 'D':cntud--;break;
                case 'L':cntlr++;break;
                case 'R':cntlr--;break;
            }
        }
        return (!cntlr)&&(!cntud);
    }
};