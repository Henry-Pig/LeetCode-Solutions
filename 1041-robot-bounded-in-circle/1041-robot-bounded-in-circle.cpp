class Solution {
public:
    bool isRobotBounded(string instructions) {
        int movex=0,movey=0,dir=0;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<instructions.size();j++)
            {
                if(instructions[j]=='G')
                {
                    if(dir==0) movex++;
                    else if(dir==1) movey++;
                    else if(dir==2) movex--;
                    else movey--;
                }
                else if(instructions[j]=='L')
                {
                    dir+=1;
                    dir%=4;
                }
                else
                {
                    dir=dir+3;
                    dir%=4;
                }
            }
        }
        if(!movex&&!movey&&!dir) return true;
        else return false;
    }
};